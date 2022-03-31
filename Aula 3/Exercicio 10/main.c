/*
Obs: como o cornio não existe para linux, foi criada uma adaptação com ncurses
*/
#include <ncurses.h>
#include <unistd.h> 
#include <stdlib.h> 

int kbhit(void)
{
 int ch = getch();
 if (ch != ERR)
 {
	ungetch(ch);
	return 1;
 }
 else
 {
	return 0;
 }
}

int main(void)
{
 int x = 1, y = 1, dx = -1, dy = -1, actualPair = 1;
 initscr();
 start_color();
 init_pair(1, 1, 0);
 init_pair(2, 2, 0);
 init_pair(3, 3, 0);
 init_pair(4, 4, 0);
 init_pair(5, 5, 0);
 init_pair(6, 6, 0);
 init_pair(7, 7, 0);
 attron(COLOR_PAIR(actualPair));
 cbreak();
 nodelay(stdscr, TRUE);
 scrollok(stdscr, TRUE);

 do
 {
	move(x, y);
	printw("0\b");
	refresh();
	sleep(1);
	printw(".");
	refresh();
	if (x == 1 || x == 30)
	{
	 attroff(COLOR_PAIR(actualPair));
	 attron(COLOR_PAIR(rand() % 7 + 1));
	 dx = -dx;
	}
	if (y == 1 || y == 20)
	{
	 attroff(COLOR_PAIR(actualPair));
	 attron(COLOR_PAIR(rand() % 7 + 1));
	 dy = -dy;
	}
	x += dx;
	y += dy;
 } while (!kbhit());
 return 0;
}
