#include <stdio.h>

int termial(int n)
{
 if (n == 0)
	return 1;

 else
	return n * termial(n - 1);
}
int main(void)
{
 int n;
 printf("Num? ");
 scanf("%d", &n);
 printf("Termial = %d\n", termial(n));
 return 0;
}
