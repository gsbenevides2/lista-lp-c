#include <stdio.h>
void cp(int n)
{
 if (n != -1)
 {
	cp(n - 1);
	printf("%d", n);
 }
}

int main(void)
{
 int n;
 printf("Num? ");
 scanf("%d", &n);
 cp(n);
 printf("\n");
 return 0;
}
