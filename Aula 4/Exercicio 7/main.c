#include <stdio.h>

int quadradoPerfeito(int n)
{
 int resultado, soma = 0, i;
 resultado = n * n;
 for (i = 1; soma != resultado; i += 2)
 {
	soma += i;
 }
 return resultado;
}

int main(void)
{
 int n, resultado;
 printf("Entre com um número para elevar ao quadrado: ");
 scanf("%d", &n);
 resultado = quadradoPerfeito(n);
 printf("%d\n", resultado);
 return 0;
}
