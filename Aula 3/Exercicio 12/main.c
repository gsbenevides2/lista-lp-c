#include <stdio.h>
#include <math.h>

int main(void)
{
 int recebido = -1;
 printf("Entre com um número para calcular sua raiz quadrada: ");
 do
 {
	scanf("%d", &recebido);
	if (recebido < 0)
	{
	 printf("Erro! Número invalido. Tente um número maior que 0: ");
	}
 } while (recebido < 0);
 printf("A raiz quadrada de %d é %.2f\n", recebido, sqrt(recebido));
}
