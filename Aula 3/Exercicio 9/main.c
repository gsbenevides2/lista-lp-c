/*
Obs: como o cornio não existe para linux, foi criada uma adaptação com ncurses
*/
#include <ncurses.h> // biblioteca para usar ncurses
#include <unistd.h>	// biblioteca para usar sleep

int kbhit(void)
{
    int ch = getch(); // pega o caracter digitado
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
    int words = 0;
    initscr();	// inicia a biblioteca ncurses
    // cbreak();
    nodelay(stdscr, TRUE);	// não espera o usuário digitar
    scrollok(stdscr, TRUE);	// permite a scroll do terminal
    while (words <= 5 && kbhit() == 0)
    {
        switch (words)
        {
				 case 0:
        case 3:
            printw("T");
            break;
        case 1:
        case 4:
            printw("E");
            break;
        case 2:
            printw("S");
            break;
        }
        words++;
        sleep(1);
    }
    printw("%d\n", getch());
    // endwin();
}
