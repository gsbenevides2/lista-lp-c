#include <stdio.h>

int main(void)
{
 int n;
 printf("Entre com um n�mero inteiro positivo: ");
 scanf("%d", &n);
 for (n; n >= 0; n--)
	printf("%d\n", n);
 return 0;
}
