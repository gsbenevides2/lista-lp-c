#include <stdio.h>
float h(int n)
{
 if (n == 1.0)
	return 1.0;
 else
	return (1.0 / n) + h(n - 1);
}

int main(void)
{
 int n;
 printf("Num? ");
 scanf("%d", &n);
 printf("Harmonica = %.2f\n", h(n));
 return 0;
}
