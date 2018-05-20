#include <ncurses.h>

int main()
{
    initscr(); // create stdscr
    cbreak();

    printw("Hello world!\n");

    getch();

    endwin();

    

    return 0;
}

