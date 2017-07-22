#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>
#include <unistd.h>

#define   MAX_COUNT  200
#define   BUF_SIZE   100

int  main(void){

    pid_t  pid;
    int    i;
    char   buf[BUF_SIZE];

    int forkreturn = fork();
    pid = getpid();

    for (i = 1; i <= MAX_COUNT; i++) {
        /*
        sprintf(buf, "%d %d\n", forkreturn, pid);
        write(1, buf, strlen(buf));

        sprintf(buf, "This line is from pid %d, value = %d\n", pid, i);
        write(1, buf, strlen(buf));
        */

        /*
        if(forkreturn == 0){
            printf("This is child\n");
        } else if (forkreturn > 0){
            printf("***This is parent\n");}
        printf("This ine is from pid %d, value = %d\n", pid, i);
        */

        if(forkreturn == 0){
            sprintf(buf, "This is child\n");
            write(1, buf, strlen(buf));
        } else if (forkreturn > 0){
            sprintf(buf, "***This is parent\n");
            write(1, buf, strlen(buf));}
        sprintf(buf, "This is from pid %d, value = %d\n", pid, i);
        write(1, buf, strlen(buf));
    }

    return 0;
}
