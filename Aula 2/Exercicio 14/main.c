#include <stdio.h>

int main(void)
{
 int placa, ultimoDigito;
 printf("Qual a numeração da placa de seu carro? ");
 scanf("%d", &placa);
 ultimoDigito = placa % 10;
 printf("Seu rodízio é na ");
 switch (ultimoDigito)
 {
	case 1:
	case 2:
	 printf("segunda-feira");
	 break;
	case 3:
	case 4:
	 printf("terça-feira");
	 break;
	case 5:
	case 6:
	 printf("quarta-feira");
	 break;
	case 7:
	case 8:
	 printf("quinta-feira");
	 break;
	case 9:
	case 0:
	 printf("sexta-feira");
	 break;
 }
 printf(".\n");
 return 0;
}
