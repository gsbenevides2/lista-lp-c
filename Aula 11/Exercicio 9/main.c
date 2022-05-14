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

int pertence(int x, Lista L)
{
    int result = 0;
    while (L != NULL)
    {
        if (x == L->item)
        {
            result = 1;
            break;
        }
        L = L->prox;
    }
    return result;
}

int main(void)
{
    Lista I = no(3, no(1, no(5, NULL)));
    exibe(I);
    printf("O item 1 está na lista = %d\n", pertence(1, I));
    return 0;
}
