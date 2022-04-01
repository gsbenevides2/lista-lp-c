/*
Enunciado; Crie a fun��o bin�rio(n), que exibe um n�mero natural n em bin�rio.
*/
#include <stdio.h>

int elevar(int b, int e)
{
    int r = 1;
    for (int i = 1; i <= e; i++)
    {
        r *= b;
    }
    return r;
}
// Descobre o tamanho do n�mero em bin�rio antes de calculalo para criar o array necess�rio
int tamanhoDoBinario(int n, int stater)
{
    if (n >= elevar(2, stater))
        return tamanhoDoBinario(n, stater + 1);
    else
        return stater;
}

void binario(int n)
{
    int qtdDeNumeros = tamanhoDoBinario(n, 1);
    // printf("Tamanho do Bin�rio: %d\n", qtdDeNumeros);
    int binario[qtdDeNumeros];

    int quosciente = n;
    for (int i = qtdDeNumeros - 1; i >= 0; i--)
    {
        // printf("Quosciente = %d binario = %d i = %d\n", quosciente, quosciente % 2, i);

        binario[i] = quosciente % 2;
        quosciente /= 2;
    }
    for (int i = 0; i < qtdDeNumeros; i++)
        printf("%d", binario[i]);
    printf("\n");
}
int main(void)
{
    int n;
    printf("Numero? ");
    scanf("%d", &n);
    binario(n);
    return 0;
}