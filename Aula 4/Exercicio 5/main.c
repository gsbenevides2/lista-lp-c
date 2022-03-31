#include <stdio.h>

float consistirParaPositivo(void)
{
 float entrada;
 printf("Entre com um n�mero real positivo: ");
 do
 {
	scanf("%f", &entrada);
	if (entrada < 0)
	 printf("N�mero inv�lido! Entre com um n�mero real positivo: ");
 } while (entrada < 0);
 return entrada;
}
float elevarAoQuadrado(float n)
{
 return n * n;
}
float valorAbsoluto(float n)
{
 return n < 0 ? n * -1 : n;
}
float calcularARaiz(float x)
{
 float r;
 r = x / 2;
 while ((elevarAoQuadrado(r) - x) >= 0.0001)
	r = (elevarAoQuadrado(r) + x) / (2 * r);
 return r;
}

int main(void)
{
 float r, x;
 x = consistirParaPositivo();
 r = calcularARaiz(x);
 printf("A raiz de %.2f � %.4f\n", x, r);
}
