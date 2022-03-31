#include <stdio.h>

void dayOfWeek(int day)
{
 switch (day)
 {
	case 1:
	 printf("Domingo\n");
	 break;
	case 2:
	 printf("Segunda-feira\n");
	 break;
	case 3:
	 printf("Terça-feira\n");
	 break;
	case 4:
	 printf("Quarta-feira\n");
	 break;
	case 5:
	 printf("Quinta-feira\n");
	 break;
	case 6:
	 printf("Sexta-feira\n");
	 break;
	case 7:
	 printf("Sabado\n");
 }
}

int main(void)
{
 int day;
 printf("Entre com o dia da semana: ");
 scanf("%d", &day);
 dayOfWeek(day);
 return 0;
}
