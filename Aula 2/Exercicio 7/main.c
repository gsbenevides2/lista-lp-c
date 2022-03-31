/*
Obs:em decorrencia de eu estar no linux o código sofreu alterações para suportar cores.
*/
#include <stdio.h>
#include <ncurses.h> //biblioteca para uso de cores

int main(void)
{
 int faltas;
 float media;
 initscr();	//inicia o modo ncurses
 start_color();	//inicia o modo de cores
 init_pair(1, COLOR_RED, COLOR_BLACK);	//define a cor 1 como vermelho
 init_pair(2, COLOR_BLUE, COLOR_BLACK);	//define a cor 2 como blue
 init_pair(3, COLOR_YELLOW, COLOR_BLACK);	//define a cor 3 como amarelo
 printw("Entre com o numero de faltas do aluno: ");
 scanw("%d", &faltas);
 printw("Entre com a nota do aluno: ");
 scanw("%f", &media);
 if (faltas > 5 || media < 4)
 {
	attron(COLOR_PAIR(1)); //ativa a cor 1
	printw("Aluno Reprovado!\n");
	attroff(COLOR_PAIR(1)); //desativa a cor 1
 }
 else if (media >= 6)
 {
	attron(COLOR_PAIR(2)); //ativa a cor 2
	printw("Aluno aprovado!\n");
	attroff(COLOR_PAIR(2)); //desativa a cor 2
 }
 else
 {
	attron(COLOR_PAIR(3)); //ativa a cor 3
	printw("Aluno de recuperação\n");
	attroff(COLOR_PAIR(3)); //desativa a cor 3
 }
 getch(); //espera um caracter
 endwin(); //encerra o modo ncurses
 return 0;
}
