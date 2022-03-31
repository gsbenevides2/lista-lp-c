#include <ncurses.h>

#define iguais(a,b,c) (a!=' ' && a==b && b==c)
#define estaEmBranco(a) (a == ' ')

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

void usuario(char m[3][3]){
 int xInformado, yInformado;
 int valido;

 do{
	printw("Posição?(x,y) ");
	scanw("%d,%d",&xInformado,&yInformado);
	if(xInformado < 0 || xInformado > 2 || yInformado < 0 || yInformado > 2){
	 valido = 0;
	 printw("Os valores de x e y deve ser de 0 a 2.\n");
	}else if(!estaEmBranco(m[xInformado][yInformado])){
	 valido = 0;
	 printw("A casa informada não está em branco.\n");
	}else 
	 valido = 1;
 }while(valido == 0);

 m[xInformado][yInformado] = 'x';
}

int main (void){
 initscr();
 char m[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

 do{
	exibe(m);
	usuario(m);
	if(vencedor(m) != ' ') printw("Vencedor: %c \n", vencedor(m));
 }while(vencedor(m) == ' ');

 printw("Pressione uma tecla para continuar...");
 getch();
 endwin();
 return 0;
}
