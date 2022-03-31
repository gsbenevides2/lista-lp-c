#include <stdio.h>

int fibonacci(int n, int old1, int old2)
{
 if (n <= 0)
	return 0;
 else if (n == 1)
	return old1 + old2;
 else if (old1 == 0)
	return fibonacci(n - 1, 1, 0);
 else if (old2 == 0)
	return fibonacci(n - 1, 1, 1);
 else
	return fibonacci(n - 1, old2, old1 + old2);
}

int main(void)
{
 int a, b;
 printf("a? ");
 scanf("%d", &a);
 b = fibonacci(a, 0, 0);
 printf("Resultado = %d\n", b);
 return 0;
}
