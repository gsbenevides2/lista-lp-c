#include <stdio.h>

int main(void)
{
 float p1, p2, m;
 printf("Notas? ");
 scanf("%f %f", &p1, &p2);
 m = (p1 + p2) / 2;
 if (m >= 6)
	puts("Aprovado");
 else
	puts("Reprovado");
 return 0;
}
