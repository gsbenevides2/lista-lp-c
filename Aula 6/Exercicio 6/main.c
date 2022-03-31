#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define MAX 15


void gera(int m[MAX][MAX])
{
 // Criar as bordas;
 for(int i=0; i< MAX; i++){
	m[i][0] = 1;
	m[0][i] = 1;
	m[MAX -1][i] = 1;
	m[i][MAX -1] = 1;
 }

 int qtdDeMalhaVazia = (MAX * MAX) - ((MAX * 2) + (MAX -2 *2));
 int qtdDeBarreiras = qtdDeMalhaVazia * 0.25;
 int blockCounter = 1;

 // Preenche o resto vetor bidimensional;
 for(int i=1; i <MAX-1;i++){
	for(int j=1; j<MAX-1;j++){
	 int randomico = rand()%2;
	 if(randomico == 1 && qtdDeBarreiras != 0 && blockCounter <= 0){
		m[i][j] = 1;
		qtdDeBarreiras--;
		blockCounter = rand()%6;
	 }else{
		blockCounter--;
		m[i][j] = 0;

	 } 
	}
 }

 //Abre as portas de entrada e saida
 m[1][0] = 0;
 m[MAX-2][MAX-1] =0;
}

void exibe(int m[MAX][MAX])
{
init_pair(3, COLOR_RED,COLOR_RED);
 init_pair(2, COLOR_WHITE, COLOR_WHITE);
 init_pair(1, COLOR_BLACK, COLOR_BLACK);
 clear();
 for (int i = 0; i < MAX; i++)
 {
	for (int j = 0; j < MAX; j++)
	{
	 int colorPair = m[i][j];
	 attron(COLOR_PAIR(colorPair + 1));
	 printw("%c", 220);
	 attroff(COLOR_PAIR(colorPair + 1));
	}
	printw("\n");
 }
}


void mostra (int c,int i, int j){
 attron(COLOR_PAIR(c));
 mvprintw(i,j,"%c", 220);
 refresh();
 attroff(COLOR_PAIR(c));
}
int sai(int m[MAX][MAX], int i, int j){
 m[i][j]=2;
 mostra(3,i,j);
 if(i==MAX-2 && j==MAX-1) return 1;
 if(m[i+1][j]==0&&sai(m,i+1,j))return 1;
 if(m[i][j+1]==0&& sai(m,i,j+1))return 1;
 if(m[i-1][j]==0&& sai(m,i-1,j))return 1;
 if(j>0 && m[i][j-1]==0 && sai(m,i,j-1))return 1;
 mostra(1,i,j);
 return 0;

}
int main(void)
{
 initscr();
 start_color();
 int m[MAX][MAX];
 srand(time(NULL));
 gera(m);
 exibe(m);
 refresh(); 
 sai(m,1,0);
 mvprintw(MAX,0,"Pressione uma tecla para sair....");
 refresh();
 getch();
 endwin();
 return 0;
}
