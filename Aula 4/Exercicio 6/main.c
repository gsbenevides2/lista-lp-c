#include <stdio.h>

// Entenda a l�gica do ano bissexto:https://www.mathsisfun.com/leap-years.html
int bissexto(int a)
{
 if (a % 4 == 0)
 {
	if (a % 100 == 0)
	 if (a % 400 == 0)
		return 1;
	 else
		return 0;
	else
	 return 1;
 }
 else
	return 0;
}

int ultimo_dia(int m, int a)
{
 switch (m)
 {
	case 2:
	 return bissexto(a) ? 29 : 28;
	 break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	 return 31;
	 break;
	default:
	 return 30;
 }
}

int valida(int d, int m, int a)
{
 if (a < 1582)
 {
	printf("Erro data inv�lida! O calend�rio gregoriano n�o existia antes de 1582.\n");
	return 0;
 }
 else if (m <= 0)
 {
	printf("Erro data inv�lida! N�o existe m�s negativo ou zero!\n");
	return 0;
 }
 else if (m > 12)
 {
	printf("Erro data inv�lida! N�o existe ano com mais de 12 meses!\n");
	return 0;
 }
 else if (d <= 0)
 {
	printf("Erro data inv�lida! N�o existe dia negativo ou zero!\n");
	return 0;
 }
 else if (d > ultimo_dia(m, a))
 {
	printf("Erro data inv�lida! Esse m�s n�o tem mais de %d dias!\n", ultimo_dia(m, a));
	return 0;
 }
 else
	return 1;
}

void exibe_ds(int d, int m, int a)
{
 int proximod = d, proximom = m, proximoa = a;
 if (d + 1 > ultimo_dia(m, a))
 {
	proximod = 1;
	if (m + 1 > 12)
	{
	 proximom = 1;
	 proximoa = a + 1;
	}
	else
	{
	 proximom = m + 1;
	}
 }
 else
	proximod = d + 1;
 printf("O dia seguinte � %02d/%02d/%d\n", proximod, proximom, proximoa);
}

int main(void)
{
 int d, m, a;
 do
 {
	printf("Entre com uma data (dd/mm/aaaa): ");
	scanf("%02d/%02d/%d", &d, &m, &a);
 } while (!valida(d, m, a));
 exibe_ds(d, m, a);
}
