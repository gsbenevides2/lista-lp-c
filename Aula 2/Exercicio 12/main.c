#include <stdio.h>

int main(void)
{
 int dia, mes, ano, test1, test2, test3;

 printf("Informe sua data de nascimento: (dd/mm/aaaa) ");
 scanf("%d/%d/%d", &dia, &mes, &ano);
 test1 = ((dia * 100) + mes) + ano;
 test2 = (test1 / 100) + (test1 - ((test1 / 100) * 100));
 test3 = test2 % 5;
 switch (test3)
 {
	case 0:
	 puts("Voc� � timido.");
	 break;
	case 1:
	 puts("Voc� � sonhador.");
	 break;
	case 2:
	 puts("Voc� � paquerador.");
	 break;
	case 3:
	 puts("Voc� � atraente.");
	 break;
	case 4:
	 puts("Voc� � irresist�vel.");
	 break;
 }
 return 0;
}
