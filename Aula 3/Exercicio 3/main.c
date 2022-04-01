#include <stdio.h>

int main(void)
{
 int n, resultado, soma = 0, i;
 printf("Entre com um número para elevar ao quadrado: ");
 scanf("%d", &n);
 resultado = n * n;
 printf("%d^2 = ", n);
 for (i = 1; soma != resultado; i += 2)
 {
	printf("%d", i);
	soma += i;
	if (soma == resultado)
	 printf(" = ");
	else
	 printf(" + ");
 }
 printf("%d\n", resultado);
 return 0;
}
