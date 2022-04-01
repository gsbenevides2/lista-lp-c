#include <stdio.h>
#include <unistd.h>
#include <ncurses.h>
#include <time.h>

int npa(void)
{
 static unsigned s = 0;
 s = time(NULL) %1000;
 return s;
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
	printw("%d", npa());
	sleep(1);
 }
}
