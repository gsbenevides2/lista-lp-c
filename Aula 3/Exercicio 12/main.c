#include <stdio.h>
#include <math.h>

int main(void)
{
 int recebido = -1;
 printf("Entre com um n�mero para calcular sua raiz quadrada: ");
 do
 {
	scanf("%d", &recebido);
	if (recebido < 0)
	{
	 printf("Erro! N�mero invalido. Tente um n�mero maior que 0: ");
	}
 } while (recebido < 0);
 printf("A raiz quadrada de %d � %.2f\n", recebido, sqrt(recebido));
}
