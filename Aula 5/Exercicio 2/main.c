/*
Enunciado: Crie a fun��o recursiva pot(x,n), que calcula a pot�ncia de um n�mero real x != 0 elevado a um n�mero natural n.
*/

#include <stdio.h>

float pot(float x, int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else
        return x * pot(x, n - 1);
}
int main(void)
{
    float x;
    int n;
    printf("Base e expoente? ");
    scanf("%f %d", &x, &n);
    printf("Pot = %.1f\n", pot(x, n));
    return 0;
}
