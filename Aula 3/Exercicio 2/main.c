/*
Obs:em decorrencia de eu estar no linux o código sofreu alterações para suportar cores.
*/

#include <stdio.h>
#include <ncurses.h> //biblioteca para uso de cores

int main(void)
{
 initscr(); //inicia o modo ncurses
 start_color(); //inicia o modo de cores
 init_pair(1, COLOR_RED, COLOR_BLACK); //define a cor 1 como vermelho
 init_pair(2, COLOR_GREEN, COLOR_BLACK); //define a cor 2 como verde
 init_pair(3, COLOR_YELLOW, COLOR_BLACK); //define a cor 3 como amarelo
 init_pair(4, COLOR_BLUE, COLOR_BLACK); //define a cor 4 como azul
 init_pair(5, COLOR_MAGENTA, COLOR_BLACK); //define a cor 5 como magenta
 init_pair(6, COLOR_CYAN, COLOR_BLACK); //define a cor 6 como ciano
 init_pair(7, COLOR_WHITE, COLOR_BLACK); //define a cor 7 como branco
 init_pair(8, COLOR_BLACK, COLOR_WHITE); //define a cor 8 como preto

 for (int c = 1; c <= 8; c++)
 {
	attron(COLOR_PAIR(c)); //ativa a cor
	printw("Cor %d\n", c);
	attroff(COLOR_PAIR(c)); //desativa a cor

 }
 getch(); //espera um caracter
 endwin(); //encerra o modo ncurses
}
