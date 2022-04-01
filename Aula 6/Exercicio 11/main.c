/*
Enunciado: O computador tem mais chance de ganhar se adotar as seguintes regras, nessa ordem:
- Ataque: Se há dois 'o' alinhados com um espaço, substitua o espaço por 'o'. 
- Defesa: Se há dois 'x' alinhados com um espaço, substitua o espaço por 'o'.
- Sorte: Jogue numa posição aleatória.
Modifique a função computador () para implementar essa estratégia.
- Para facilitar, crie a função completa (m, c), que procura em m dois caracteres iguais a c alinhados com um espaço e, se encontrar, substitui o espaço pelo caractere 'o' (a função deve devolver uma resposta o ou 1, indicando se conseguiu ou não substituir um espaço em branco na matriz m por um caractere 'o').
A função computador() deve chamar completa (m,'o') para atacar. Caso essa chamada devolva o, a função deve chamar completa (m, 'x') para defender. Se a segunda chamada também devolver o, a função deve jogar aleatoriamente.
*/

#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	printw("Posição?(l,c) ");

	scanw("%d,%d",&xInformado,&yInformado);
	if(xInformado < 1 || xInformado > 3 || yInformado < 1 || yInformado > 3){
	 valido = 0;
	 printw("Os valores de x e y deve ser de 1 a 3.\n");
	}else if(!estaEmBranco(m[xInformado-1][yInformado-1])){
	 valido = 0;
	 printw("A casa informada não está em branco.\n");
	}else
	 valido = 1;
 }while(valido == 0);

 m[xInformado-1][yInformado-1] = 'x';
}

int completa(char m[3][3], char c){
 int p1,p2,p3;
 //printw("Completa %c\n", c);

 for(int i = 0; i<3;i++){
	if(estaEmBranco(m[i][0]) || estaEmBranco(m[i][1]) || estaEmBranco(m[i][2])){
	 p1 = m[i][0] == c;
	 p2 = m[i][1] == c;
	 p3 = m[i][2] == c;
	 //printw("%d %d %d %d\n", 1, p1, p2, p3);
	 if(p1 + p2 + p3 == 2){
		if(p1 == 0) m[i][0] = 'o';
		else if(p2 == 0) m[i][1] = 'o';
		else m[i][2] = 'o';
		return 1;
	 }
	}
 }

 for(int i = 0; i<3;i++){
	if(estaEmBranco(m[0][i]) || estaEmBranco(m[1][i]) || estaEmBranco(m[2][i])){
	 p1 = m[0][i] == c;
	 p2 = m[1][i] == c;
	 p3 = m[2][i] == c;
	 //printw("%d %d %d %d\n", 2, p1, p2, p3);
	 if(p1 + p2 + p3 == 2){
		if(p1 == 0) m[0][i] = 'o';
		else if(p2 == 0) m[1][i] = 'o';
		else m[2][i] = 'o';
		return 1;
	 }
	}
 }

 if(estaEmBranco(m[0][0]) || estaEmBranco(m[1][1])|| estaEmBranco(m[2][2])){
	p1 = m[0][0] == c;
	p2 = m[1][1] == c;
	p3 = m[2][2] == c;
	 //printw("%d %d %d %d\n", 3, p1, p2, p3);
	if(p1 + p2 + p3 == 2){
	 if(p1 == 0) m[0][0] = 'o';
	 else if(p2 == 0) m[1][1] = 'o';
	 else m[2][2] = 'o';
	 return 1;
	}
 }

 if(estaEmBranco(m[0][2]) || estaEmBranco(m[1][1]) || estaEmBranco(m[2][0])){
	p1 = m[0][2] == c;
	p2 = m[1][1] == c;
	p3 = m[2][0] == c;
	// printw("%d %d %d %d\n", 4, p1, p2, p3);
	if(p1 + p2 + p3 == 2){
	 if(p1 == 0) m[0][2] = 'o';
	 else if(p2 == 0) m[1][1] = 'o';
	 else m[2][0] = 'o';
	 return 1;
	}
 }
 return 0;
}

void computador(char m[3][3]){
 int xAleatorio,yAleatorio;
 int c = completa(m,'o');
 if(c == 0) c = completa(m, 'x');
 if(c == 0){
	do{
	 xAleatorio = rand()%3;
	 yAleatorio = rand()%3;
	 //printw("%d %d %d\n", 5, xAleatorio, yAleatorio);
	}while(!estaEmBranco(m[xAleatorio][yAleatorio]));
	m[xAleatorio][yAleatorio] = 'o';
 }
}

int empate(char m[3][3]){
 int contador=0;
 for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	 if(estaEmBranco(m[i][j]) == 0) contador++;
	}
 }
 return contador == 9;
}

int main (void){
 initscr();
 srand(time(NULL));

 char m[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
 int e ,s;
 char v;

 printw("Par(0) ou impar(1)? ");
 scanw("%d", &e);
 s = 0,//rand()%2;
 printw("Sorteado: %d\n", s);
 if(e==s) printw("Você começa!");
 else printw("Eu começo!");
 printw("Pressione enter...");
 getch();

 do{
	exibe(m);

	if( e==s ) usuario(m);
	else computador(m);
	v = vencedor(m);
	s = !s;
 }while(!empate(m) && v==' ');

 exibe(m);

 switch(v){
	case ' ': printw("Empate\n"); break;
	case 'x': printw("Você venceu!\n"); break;
	case 'o': printw("Eu venci!\n"); break;
 }

 printw("Pressione uma tecla para continuar...");
 getch();
 endwin();
 return 0;
}
