#include <stdio.h>

int main(void)
{
 int placa, ultimoDigito;
 printf("Qual a numeração da placa de seu carro? ");
 scanf("%d", &placa);
 ultimoDigito = placa % 10;
 printf("Seu rodízio é na ");
 if (ultimoDigito == 1 || ultimoDigito == 2)

	printf("segunda-feira");

 else if (ultimoDigito == 3 || ultimoDigito == 4)
	printf("terça-feira");
 else if (ultimoDigito == 5 || ultimoDigito == 6)
	printf("quarta-feira");
 else if (ultimoDigito == 7 || ultimoDigito == 8)
	printf("quinta-feira");
 else
	printf("sexta-feira");

 printf(".\n");
 return 0;
}
