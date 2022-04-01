#include <stdio.h>

int main(void)
{
 int maior = 0, menor = 0, recebido = -1;
 printf("Números(o ultimo número precisa ser 0 e de enter no final)? ");
 while (recebido != 0)
 {
	scanf("%d", &recebido);
	if (recebido != 0)
	{
	 if (maior == 0)
		maior = recebido;
	 if (menor == 0)
		menor = recebido;
	 if (recebido > maior)
		maior = recebido;
	 if (recebido < menor)
		menor = recebido;
	}
 }
 printf("O maior número é %d e o menor é %d\n", maior, menor);
}
