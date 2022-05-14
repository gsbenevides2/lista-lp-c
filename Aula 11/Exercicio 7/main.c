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

void destroi(Lista *L)
{
    while (*L)
    {
        Lista n = *L;
        *L = n->prox;
        free(n);
    }
}

int main(void)
{
    Lista H = no(8, no(4, NULL));
    Lista I = no(3, no(1, no(5, NULL)));
    printf("H = ");
    exibe(H);
    printf("I = ");
    exibe(I);
    printf("Pressione enter");
    getchar();
    destroi(&H);
    destroi(&I);
    printf("Listas Destruidas\n");

    return 0;
}
