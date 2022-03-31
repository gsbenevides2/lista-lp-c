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
	printf("As opções disponives são:\n");
	printf("1 - Depósito\n");
	printf("2 - Saque\n");
	printf("3 - Saldo\n");
	printf("4 - Sair\n");
	printf("Digite o número da opção desejada e tecle enter: ");
	scanf("%d", &opcao);
	switch (opcao)
	{
	 case 1:
		printf("Você selecionou a opção de deposito.\nInforme o valor que deseja depositar: ");
		do
		{
		 scanf("%f", &valorDeDeposito);
		 if (valorDeDeposito <= 0)
			printf("Não é possivel fazer depósitos no valor de R$ %.2f. Digite um novo valor: ", valorDeDeposito);
		} while (valorDeDeposito <= 0);
		printf("O valor que será depositado é de R$ %.2f\n", valorDeDeposito);
		printf("Tem certeza que deseja depositar?(0 - Não 1 - Sim) ");
		scanf("%i", &confirmacao);
		if (confirmacao == 1)
		{
		 printf("Aguarde, operação em andamento...\n");
		 sleep(rand() % 10 + 1);
		 saldo += valorDeDeposito;
		 printf("Operação concluida com sucesso! Segue o número da transação: %04d\n", (rand() % 1000 - 1));
		}
		else
		 printf("Operação de depósito cancelada!\n");
		break;
	 case 2:

		printf("Você selecionou a opção de saque.\nInforme o valor que deseja sacar: ");
		do
		{
		 scanf("%f", &valorDeSaque);
		 if (valorDeSaque <= 0)
			printf("Não é possivel fazer saques no valor de R$ %.2f. Digite um novo valor: ", valorDeSaque);
		} while (valorDeSaque <= 0);
		printf("O valor que será sacado é de R$ %.2f\n", valorDeSaque);
		printf("Tem certeza que deseja sacar?(0 - Não 1 - Sim) ");
		scanf("%i", &confirmacao);
		if (confirmacao == 1)
		{
		 printf("Aguarde, operação em andamento...\n");
		 sleep(rand() % 10 + 1);
		 if (valorDeSaque > saldo)
			printf("Saque não autorizado pelo banco por saldo insuficiente na conta!\n");
		 else
		 {
			saldo -= valorDeSaque;
			printf("Operação concluida com sucesso! Segue o número da transação: %04d\n", (rand() % 1000 - 1));
		 }
		}
		else
		 printf("Operação de saque cancelada!\n");
		break;
	 case 3:
		printf("Você selecionou a opção de saldo.\nSeu saldo é de R$ %.2f\n", saldo);
		break;
	 case 4:
		printf("O banco do pobre agradeçe a sua vista. Até mais :)");
		continuar = 0;
		break;
	 default:
		printf("Opção Invalida!\n");
		break;
	}

 } while (continuar == 1);
}
