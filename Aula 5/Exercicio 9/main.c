#include <stdio.h>

int par(int n)
{
 if (n != 0 && n != 1)
	return par(n - 2);
 else
	return n == 0;
}
int main(void)
{
 int n;
 printf("Num? ");
 scanf("%d", &n);
 printf("Resultado: %d\n", par(n));
 return 1;
}
