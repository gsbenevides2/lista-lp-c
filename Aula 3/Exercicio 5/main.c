#include <stdio.h>

int main(void)
{
 int n, resultado = 1, i;
 printf("Entre com numero inteiro positivo: ");
 scanf("%d", &n);
 if (n > 0)
 {
	for (i = n; i >= 1; i--)
	{
	 resultado *= i;
	}
 }
 printf("%d! = %d\n", n, resultado);
 return 0;
}
