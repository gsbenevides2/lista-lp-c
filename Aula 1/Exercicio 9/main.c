#include <stdio.h>

int main(void)
{
 float tempF, tempC;
 printf("Conversor de Temperatura em Fahrenheit para Celsius.\n");
 printf("Qual a temperatura em Fahrenheit? ");
 scanf("%f", &tempF);
 tempC = (tempF - 32.0) * (5.0 / 9.0);
 printf("%.2f�F � %.2f�C\n", tempF, tempC);
 return 0;
}
