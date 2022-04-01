#include <stdio.h>
#include <ncurses.h>

#define MAX 8

void exibe(int m[MAX][MAX])
{

 init_pair(2, COLOR_WHITE, COLOR_WHITE);
 init_pair(1, COLOR_BLACK, COLOR_BLACK);
 for (int i = 0; i < MAX; i++)
 {
	for (int j = 0; j < MAX; j++)
	{
	 int colorPair = m[i][j];
	 attron(COLOR_PAIR(colorPair+1));
	 printw("%c", 220);
	 attroff(COLOR_PAIR(colorPair+1));
	}
	printw("\n");
 }
}
int main(void)
{
 initscr();
 start_color();
 int m[MAX][MAX] = {{1, 1, 1, 1, 1, 1, 1, 1},
	{0, 0, 1, 0, 0, 0, 0, 1},
	{1, 0, 1, 0, 1, 0, 1, 1},
	{1, 0, 1, 0, 1, 0, 0, 1},
	{1, 0, 0, 0, 1, 1, 0, 1},
	{1, 0, 1, 0, 0, 1, 0, 1},
	{1, 0, 1, 0, 1, 1, 0, 0},
	{1, 1, 1, 1, 1, 1, 1, 1}};
 exibe(m);
 printw("Pressione uma tecla para sair....");
 getch();
 endwin();
 return 0;
}
