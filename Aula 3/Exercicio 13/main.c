#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
 float saldo = 1000;
 int opcao;
 int senha = 0000;
 int continuar = 1;
 int confirmacao;
 float valorDeDeposito;
 float valorDeSaque;
 printf("Seja bem-vindo ao caixa eletronico do banco do pobre.\n");
 do
 {
	printf("As op��es disponives s�o:\n");
	printf("1 - Dep�sito\n");
	printf("2 - Saque\n");
	printf("3 - Saldo\n");
	printf("4 - Sair\n");
	printf("Digite o n�mero da op��o desejada e tecle enter: ");
	scanf("%d", &opcao);
	switch (opcao)
	{
	 case 1:
		printf("Voc� selecionou a op��o de deposito.\nInforme o valor que deseja depositar: ");
		do
		{
		 scanf("%f", &valorDeDeposito);
		 if (valorDeDeposito <= 0)
			printf("N�o � possivel fazer dep�sitos no valor de R$ %.2f. Digite um novo valor: ", valorDeDeposito);
		} while (valorDeDeposito <= 0);
		printf("O valor que ser� depositado � de R$ %.2f\n", valorDeDeposito);
		printf("Tem certeza que deseja depositar?(0 - N�o 1 - Sim) ");
		scanf("%i", &confirmacao);
		if (confirmacao == 1)
		{
		 printf("Aguarde, opera��o em andamento...\n");
		 sleep(rand() % 10 + 1);
		 saldo += valorDeDeposito;
		 printf("Opera��o concluida com sucesso! Segue o n�mero da transa��o: %04d\n", (rand() % 1000 - 1));
		}
		else
		 printf("Opera��o de dep�sito cancelada!\n");
		break;
	 case 2:

		printf("Voc� selecionou a op��o de saque.\nInforme o valor que deseja sacar: ");
		do
		{
		 scanf("%f", &valorDeSaque);
		 if (valorDeSaque <= 0)
			printf("N�o � possivel fazer saques no valor de R$ %.2f. Digite um novo valor: ", valorDeSaque);
		} while (valorDeSaque <= 0);
		printf("O valor que ser� sacado � de R$ %.2f\n", valorDeSaque);
		printf("Tem certeza que deseja sacar?(0 - N�o 1 - Sim) ");
		scanf("%i", &confirmacao);
		if (confirmacao == 1)
		{
		 printf("Aguarde, opera��o em andamento...\n");
		 sleep(rand() % 10 + 1);
		 if (valorDeSaque > saldo)
			printf("Saque n�o autorizado pelo banco por saldo insuficiente na conta!\n");
		 else
		 {
			saldo -= valorDeSaque;
			printf("Opera��o concluida com sucesso! Segue o n�mero da transa��o: %04d\n", (rand() % 1000 - 1));
		 }
		}
		else
		 printf("Opera��o de saque cancelada!\n");
		break;
	 case 3:
		printf("Voc� selecionou a op��o de saldo.\nSeu saldo � de R$ %.2f\n", saldo);
		break;
	 case 4:
		printf("O banco do pobre agrade�e a sua vista. At� mais :)");
		continuar = 0;
		break;
	 default:
		printf("Op��o Invalida!\n");
		break;
	}

 } while (continuar == 1);
}
