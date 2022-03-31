#include <stdio.h>
#include <unistd.h>
#include <ncurses.h>

void sequencia(void)
{
    static int n = 0;
    printw("%d", n++);
}

int main(void)
{
    initscr();
    cbreak();
    noecho();
    scrollok(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    while (getch() == ERR)
    {
        sequencia();
        sleep(1);
    }
}
