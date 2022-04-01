#include <ncurses.h>

int len(char v[]){
 	int i = 0;
	while(v[i] != '\0'){
		i++;
	}
	return i;
}
void centraliza(char v[]){
 int line = 11;
 int col=	(80 - len(v))/2;
 move(line,col); // Move o cursor	para a posição
 printw(v);	// Imprime o texto
}

int main(void){
 char v[] = "Apenas	um teste";
 initscr(); //	Inicializa o ncurses
 clear();	// Limpa a tela
 centraliza(v);
 getch(); // Aguarda um caracter
 endwin(); // Fecha o ncurses
 return 0;
}
