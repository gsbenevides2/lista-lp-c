#include <stdio.h>

void binario(int n)
{

 if (n != 2 && n != 1)
	binario(n / 2);
 printf("%d", n % 2);
}

int main(void)
{
 int n;
 printf("Num? ");
 scanf("%d", &n);
 binario(n);
 puts("\n");
 return 0;
}
