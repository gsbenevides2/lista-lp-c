#include <stdio.h>

int main(void)
{
 int n, resultado = 0, i;
 printf("Entre com numero inteiro positivo: ");
 scanf("%d", &n);
 for (i = n; i >= 0; i--)
 {
	resultado += i;
 }
 printf("%d? = %d\n", n, resultado);
 return 0;
}
