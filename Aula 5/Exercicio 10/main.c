#include <stdio.h>

int quociente(int a, int b)
{
 if (a >= b)
 {
	return 1 + quociente(a - b, b);
 }
 else
	return 0;
}

int main(void)
{
 int a, b, c;
 printf("a b? ");
 scanf("%d %d", &a, &b);
 c = quociente(a, b);
 printf("Resultado = %d\n", c);
 return 0;
}
