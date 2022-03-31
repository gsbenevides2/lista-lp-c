#include <stdio.h>

int main(void)
{
 int soma = 0, v, numeral, digito;
 char number[6];
 printf("Entre com o número de sua conta: ");
 scanf("%d", &numeral);

 sprintf(number, "%d", numeral);
 for (int i = 0; i < 6; i++)
 {
	v = number[i] - '0';
	if (v != -48)
	 soma += v;
 }
 digito = soma % 10;
 printf("Número da Conta: %06d-%d\n", numeral, digito);
 return 0;
}
