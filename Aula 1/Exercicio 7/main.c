#include <stdio.h>

int main(void)
{
 float nota1, nota2, media;
 printf("Calculadora de Notas da Prova\n");
 printf("Por favor entre com as duas notas: ");
 scanf("%f %f", &nota1, &nota2);
 media = (nota1 + nota2) / 2;
 printf("Sua nota foi de %.2f\n", media);
 return 0;
}
