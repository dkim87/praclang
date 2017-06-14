/*** includes ***/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<termios.h>
#include <ctype.h>
#include <errno.h>
#include "printbit.h"

/*** prototypes ***/
void enableRawMode();
void disableRawMode();

/*** data ***/
struct termios orig_termios;

/*** terminal ***/
void die(const char *s){
    perror(s); // looks at global errno and prints a descriptive error message for it. It also privide context.
    exit(1);
}

void disableRawMode(){ // this function prevents leftover input to be fed into the shell
    // this is because TCSAFLUSH option. It discards any unread input before applying the changes to the terminal.
    //tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios);
    //error handling
    if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios) == -1)
        die("tcsetattr");
}

void enableRawMode(){
    //tcgetattr(STDIN_FILENO, &orig_termios);
    if (tcgetattr(STDIN_FILENO, &orig_termios) == -1 )
        die("tcgetattr");
    atexit(disableRawMode); // comes from <stdlib.h>. disableRawMode() is registered to be called automatically when the program exits.

    struct termios raw = orig_termios;
    //tcgetattr(STDIN_FILENO, &raw); // we now copy orig_termios instead
    /*my debug. In order to disable, use :%s/\/\/\*my/\/*my/gc
    printf("%-20s %-20s %d\n", "<< ECHO >> ", " has value of ", ECHO); //0b1000 // 8
    printf("%-20s %-20s %ld\n", "<< raw.c_lflag >> ", " has value of ", raw.c_lflag);
    //*/
    //raw.c_lflag &= ~(ECHO); // 0b00000000000000000000000000001000, forces raw.c_flag's fourth bit to become 0
    //printbit(ECHO); // 4th bit is 1
    //printbit(ICANON); //.9th bit is 1
    //raw.c_lflag &= ~(ECHO | ICANON); // ICANON turns off canonical mode. We now read input byte by byte, instead of line-by-line.
    //printbit(ISIG); // 8th bit is 1
    //raw.c_lflag &= ~(ECHO | ICANON | ISIG); // ISIG turns off C-c (SIGINT) and C-z (SIGTSTP)
    // now C-c (3) and C-z (26) can be read. Seems it follows alphabetical order. ESC is 27
    // In macOS, CtrlY is disabled.
    // Now we would also try to disable C-s, C-q. This was disabled for me as stty -ixon, but for those who doesn't have this option, I need to configure it with IXON flag.
    //printbit(IXON); 10th bit is 1
    //raw.c_iflag &= ~(IXON); //beware; it is iflag, not lflag
    // Now we would disable C-v, which waits for the next input and prints its literal value. e.g. C-m, Enter(10->13) or C-o in macOS. We use IEXTEN flag.
    //raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG );
    // Now we turn off C-m (10 -> 13). C-m and Enter key are \r (carriage return), C-j is \n (new line). It turns out that the terminal is helpfully translating any carriage returns \r by the user into newlines. Let us turn off this feature with ICRNL flag.
    //raw.c_iflag &= ~(ICRNL | IXON);
    // Now we turn off output processing \n -> \r\n by the terminal. Use OPOST flag.
    //raw.c_oflag &= ~(OPOST); // meaning: post processing of output
    // miscellaneous
    raw.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON); // BRKINT, INPCK, ISTRIP added
    raw.c_oflag &= ~(OPOST);
    //printbit(CS8); all zero except for 9th and 10th bits.
    raw.c_cflag |= ~(CS8); // CS8 added // beware OR | //c_cflag becomes all one (FFFF)
    raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG );
    /*
    BRKINT -> break condition will cause a sigint
    INPCK -> enables parity checking
    ISTRIP -> 8th bit of each input byte to be stripped, meaning it will set it to 0.
    CS8 is not a flag, it is a bit mask with multiple bits, which we set using the bitwise -OR | operator. It sets character size (CS) 8 bits per byte.
    */

    // timeout for read()
    // currenty read() waits for indefinite time. Let us put limits.
    // c_cc stands for control characters
    raw.c_cc[VMIN] = 0; // sets the minimum number of bytes of input needed before read() can return.
    raw.c_cc[VTIME] = 1; // sets the maximum amount of time to wait before read() returns. It is tenths of a second. If read() times out, it will return 0.

    //tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
    if(tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw) == -1) die("tcsetattr");
}

/*** init ***/
int main(){
    enableRawMode(); // echo off

    #if 0 // timeout for readme
    char c; // std input is copied from STDIN_FILENO to this var `c' by read function.
    char a; // for debug purpose
    while ((a=read(STDIN_FILENO, &c, 1)) == 1 && c != 'q'){
        /*my debug. To disable, use :%s/\/\/\*my/\/*my/gc
        printf("%-20s %-20s %d\n", "<< c >> ", " has value of ", c); // input copied
        printf("%-20s %-20s %d\n", "<< a >> ", " has value of ", a); // always 1 except for ctrl-D EOF //0
        printf("%-20s %-20s %d\n", "<< STDIN_FILENO >> ", " has value of ", STDIN_FILENO); //always 0
        //*/
        //* Switch
        if(iscntrl(c)){ // tests whether a character is a control char. 0-31 / 127 ASCII
            printf("%d\r \n",c);
        }else{
            printf("%d ('%c')\r \n", c, c);
        }
        /*/
          printf("%d\t",c);
        //*/
        /** /
        printf("hello world\n");
        /**/
    }
    #else

    while(1){
        char c = '\0';
        //read(STDIN_FILENO, &c, 1);
        if(read(STDIN_FILENO, &c, 1)==-1 && errno != EAGAIN) die ("read");
        if(iscntrl(c)){
            printf("%d\r\n", c);
        }else{
            printf("%d ('%c')\r\n", c, c);
        }
        if (c == 'q') break;
    }

    #endif
    return 0;
}
