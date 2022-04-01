#include <stdio.h>
void cr(int n)
{
 if (n != -1)
 {
	printf("%d", n);
	cr(n - 1);
 }
}

int main(void)
{
 int n;
 printf("Num? ");
 scanf("%d", &n);
 cr(n);
 printf("\n");
 return 0;
}
