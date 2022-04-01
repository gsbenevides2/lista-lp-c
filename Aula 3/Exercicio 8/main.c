/*
Obs: como o cornio não existe para linux, foi criada uma adaptação com ncurses
*/
#include <ncurses.h> // Biblioteca para lidar com terminal no linux
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    initscr();     // Inicia o ncurses
    start_color(); // Inicia as cores
    int col = 40, lin = 12, cursorAtivado = 1, corAtual = 1, pairAtual = 1;
    curs_set(0); // Remove o sinalizador cursor

    init_pair(pairAtual, corAtual, corAtual); // Cria um par de cores
    attron(COLOR_PAIR(pairAtual));            // Define qual par de cores vai ser usado

    while (1)
    {
        move(lin, col); // Move o cursor
        if (cursorAtivado == 1)
        {
            echo();            // liga a saída do terminal
            printw("%c", 219); // imprime um caracter
            noecho();          // desliga a saída do terminal
            refresh();         // recarega o terminal
        }

        int num = getch(); // obtem o carcacter digitado
        switch (toupper(num))
        {
        case 'N':
            if (lin > 1)
                lin--;
            break;
        case 'S':
            if (lin < 24)
                lin++;
            break;
        case 'L':
            if (col < 80)
                col++;
            break;
        case 'O':
            if (col > 1)
                col--;
            break;
        case 'F':
            endwin();
            exit(1);
        case 'C':
            if (corAtual == 6)
                corAtual = 1;
            else
                corAtual++;
            attroff(COLOR_PAIR(pairAtual)); // remove a definção antiga as cores
            pairAtual++;
            init_pair(pairAtual, corAtual, corAtual); // cria uma nova com novas cores
            attron(COLOR_PAIR(pairAtual));            // reatribui a nova cor
            refresh();                                // recarrega o terminal
            break;

        case 'R':
            if (cursorAtivado == 1)
            {
                cursorAtivado = 0;
                curs_set(2);
            }
            else
            {
                cursorAtivado = 1;
                curs_set(0);
            }
            break;
        }
    }
    endwin();
    return 0;
}
