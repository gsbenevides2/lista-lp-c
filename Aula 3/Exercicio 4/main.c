#include <stdio.h>

int main(void)
{
 int base, potencia, resultado = 1, i;
 printf("Entre com a base e a potencia: ");
 scanf("%d %d", &base, &potencia);
 if (potencia > 0)
 {
	for (i = 1; i <= potencia; i++)
	{
	 resultado *= base;
	}
 }
 printf("%d ^ %d = %d\n", base, potencia, resultado);
 return 0;
}
