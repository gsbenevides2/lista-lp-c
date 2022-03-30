/* OBESO>C - determina se uma pessoa está obesa */

#include <stdio.h> // entrada e saida padrão
#include <math.h>  // funções matemáticas

int main(void)
{
 float peso, altura, imc;
 printf("Qual o peso e a altura? ");
 scanf("%f %f", &peso, &altura);
 imc = peso / pow (altura, 2);
 printf("IMC = %.1f\n", imc);
 if (imc <= 30)
	printf("Não esta obesa!\n");
 else
	printf("Esta obesa!\n");
 return 0;
}
