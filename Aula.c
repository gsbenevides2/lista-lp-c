/* OBESO>C - determina se uma pessoa est� obesa */

#include <stdio.h> // entrada e saida padr�o
#include <math.h>  // fun��es matem�ticas

int main(void)
{
 float peso, altura, imc;
 printf("Qual o peso e a altura? ");
 scanf("%f %f", &peso, &altura);
 imc = peso / pow (altura, 2);
 printf("IMC = %.1f\n", imc);
 if (imc <= 30)
	printf("N�o esta obesa!\n");
 else
	printf("Esta obesa!\n");
 return 0;
}
