#include <stdio.h>

int main(void)
{
 float salario, imposto;
 printf("Qual o sal�rio do funcion�rio? ");
 scanf("%f", &salario);
 if (salario <= 1903.83)
	puts("Voc� est� insento de imposto!");
 else if (salario <= 2826.65)
 {
	imposto = salario * 0.075;
	puts("Porcentagem de imposto: 7,5 por cento.");
	printf("Total de imposto: R$ %.2f.\n", imposto);
	printf("Sal�rio com imposto abatido: RS %.2f.\n", salario - imposto);
 }
 else if (salario <= 3751.05)
 {
	imposto = salario * 0.15;
	puts("Porcentagem de imposto: 15 por cento.");
	printf("Total de imposto: R$ %.2f.\n", imposto);
	printf("Sal�rio com imposto abatido: RS %.2f.\n", salario - imposto);
 }
 else if (salario <= 4664.68)
 {
	imposto = salario * 0.225;
	puts("Porcentagem de imposto: 22,5 por cento.");
	printf("Total de imposto: R$ %.2f.\n", imposto);
	printf("Sal�rio com imposto abatido: RS %.2f.\n", salario - imposto);
 }
 else
 {
	imposto = salario * 0.275;
	puts("Porcentagem de imposto: 27,5 por cento.");
	printf("Total de imposto: R$ %.2f.\n", imposto);
	printf("Sal�rio com imposto abatido: RS %.2f.\n", salario - imposto);
 }
 return 0;
}
