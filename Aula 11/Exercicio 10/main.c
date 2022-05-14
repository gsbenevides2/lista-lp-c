#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct no
{
    Item item;
    struct no *prox;
} * Lista;

Lista no(Item x, Lista p)
{
    Lista n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

void exibe(Lista L)
{
    printf("[");
    while (L != NULL)
    {
        printf("%d", L->item);
        L = L->prox;
        if (L != NULL)
            printf(",");
    }
    printf("]\n");
}

Lista inversa(Lista L)
{
    Lista I = NULL;
    while (L != NULL)
    {
        I = no(L->item, I);
        L = L->prox;
    }
    return I;
}

int main(void)
{
    Lista I = no(3, no(1, no(5, NULL)));
    exibe(I);
    Lista A = inversa(I);
    exibe(A);
    return 0;
}
