#include <stdio.h>

int produto(int a, int b)
{
 if (a == 0 || b == 0)
	return 0;
 if (a > 1)
	return b + produto(a - 1, b);
}
int main(void)
{
 int a, b, c;
 printf("a b? ");
 scanf("%d %d", &a, &b);
 c = produto(a, b);
 printf("Resultado = %d\n", c);
 return 0;
}
