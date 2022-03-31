#include <stdio.h>
#include <math.h>

int main(void)
{
 int a, b, c, delta;
 float x1, x2;
 printf("Entre com os coeficiente a b e c: ");
 scanf("%d %d %d", &a, &b, &c);
 if (a == 0)
 {
	puts("Epa isso não é uma equação de segundo grau!");
 }
 else
 {
	delta = pow(b, 2) + (-4 * a * c);
	if (delta < 0)
	{
	 puts("Não exitem raizes para essa equação!");
	}
	else
	{
	 x1 = (-b + sqrt(delta)) / (2 * a);
	 x2 = (-b - sqrt(delta)) / (2 * a);
	 printf("A primeira raiz é: %.2f.\nA segunda raiz é: %.2f.\n", x1, x2);
	}
 }
 return 0;
}
