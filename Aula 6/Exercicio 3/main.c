/*
Obs: como o cornio não existe para linux, foi criada uma adaptação com ncurses
*/

#include <ncurses.h>

void preenche(float v[7])
{
 for (int i = 0; i < 7; i++)
 {
	int e;
	printw("%da temperatura? ", i + 1);
	scanw("%f", &v[i]);
	v[7] = e;
 }
}

float media(float v[7])
{
 float result = 0;
 for (int i = 0; i < 7; i++)
 {
	result += v[i];
 }
 return result / 7.0;
}

int conta(float v[7], float m)
{
 int result = 0;
 for (int i = 0; i < 7; i++)
 {
	if (v[i] > m)
	 result++;
 }
 return result;
}

void histograma(float v[7], float m)
{
 // Define os auxiliares para identificadores do Pair de Cores
 int pairVermelho = 1;
 int pairAzul = 2;
 int pairVerde = 3;
 // int pairReset = 4;
 //  Define de fato os pairs
 init_pair(pairVermelho, COLOR_RED, COLOR_RED);
 init_pair(pairVerde, COLOR_GREEN, COLOR_GREEN);
 init_pair(pairAzul, COLOR_BLUE, COLOR_BLUE);
 // init_pair(pairReset, COLOR_BLACK, COLOR_WHITE);

 char diasDaSemana[7] = {'D', 'S', 'T', 'Q', 'Q', 'S', 'S'};

 for (int i = 0; i < 7; i++)
 {
	int pairColor = 0;
	printw("%c: ", diasDaSemana[i]);
	if (v[i] == m)
	 pairColor = pairVerde;
	else if (v[i] > m)
	 pairColor = pairVermelho;
	else
	 pairColor = pairAzul;

	attron(COLOR_PAIR(pairColor));

	for (int j = 1; j <= v[i]; j++)
	 printw("%c", 219);
	attroff(COLOR_PAIR(pairColor));
	printw("\n");
 }
}
void exibe(float v[7])
{
 for (int i = 0; i < 7; i++)
 {
	printw("%.2f\n", v[i]);
 }
}

int main(void)
{

 initscr();     // Incialização da Biblioteca NCurses
 start_color(); // Incia as cores

 float v[7];
 preenche(v);
 // exibe(v);
 float m = media(v);
 printw("Media %.1f °C\n", m);
 printw("Dias acima da média: %d\n", conta(v, m));
 histograma(v, m);
 printw("Precisone um tecla para encerrar...");
 getch();
 endwin(); // Encerra o NCurses
 return 0;
}
