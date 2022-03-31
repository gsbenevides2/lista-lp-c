/*
Enunciado: Crie a função recursiva pot(x,n), que calcula a potência de um número real x != 0 elevado a um número natural n.
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
