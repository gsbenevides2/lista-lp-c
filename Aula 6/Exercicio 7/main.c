#include <ncurses.h>

#define iguais(a,b,c) (a!=' ' && a==b && b==c)

void exibe(char m[3][3]){
 clear();
 for(int i =0;i<3;i++){
	printw(" %c | %c | %C \n", m[i][0], m[i][1], m[i][2]);
	if(i<2) printw("---+---+---\n");
 }
}

int vencedor(char m[3][3]){
 for(int i=0;i<3;i++){
	if(iguais( m[i][0], m[i][1], m[i][2] )) return m[i][0];
	if(iguais( m[0][i], m[1][i], m[2][i] )) return m[0][i];
 }
 if(iguais(m[0][0], m[1][1], m[2][2])) return m[0][0];
 if(iguais(m[0][2], m[1][1], m[2][0])) return m[0][2];
 return ' ';
}

int main (void){
 initscr();
 char m[3][3] = {{'x',' ','o'},{' ','x','o'},{' ',' ','x'}};
 exibe(m);
 printw("Vencedor: %c \n", vencedor(m));
 printw("Pressione uma tecla para continuar...");
 getch();
 endwin();
 return 0;
}
