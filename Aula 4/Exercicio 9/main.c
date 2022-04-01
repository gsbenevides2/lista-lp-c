#include <stdio.h>

int fatorial(int n)
{
 int resultado = 1, i;

 if (n > 0)
 {
	for (i = n; i >= 1; i--)
	{
	 resultado *= i;
	}
 };
 return resultado;
}
int main(void)
{
 int n;
 printf("Entre com numero inteiro positivo: ");
 scanf("%d", &n);

 printf("%d! = %d\n", n, fatorial(n));
 return 0;
}
