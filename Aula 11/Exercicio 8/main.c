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

int ultimo(Lista L)
{
    int lastItem;
    while (L != NULL)
    {
        lastItem = L->item;
        L = L->prox;
    }
    return lastItem;
}

int main(void)
{
    Lista I = no(3, no(1, no(5, NULL)));
    exibe(I);
    printf("Ultimo item = %d\n", ultimo(I));
    return 0;
}
