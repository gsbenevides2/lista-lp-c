#include <stdio.h>
#include <stdlib.h>

int *merge(int v[], int vlenght, int w[], int wlenght)
{
    int vectorSize = vlenght + wlenght;
    int *p = malloc(sizeof(int) * vectorSize);

    int vPosition = 0;
    int wPosition = 0;

    for (int i = 0; i < vectorSize; i++)
    {
        int actualVItem = v[vPosition];
        int actualWItem = w[wPosition];

        if (actualVItem < actualWItem || actualWItem == p[i - 1])
        {
            p[i] = actualVItem;
            if (vPosition + 1 < vlenght)
                vPosition++;
        }
        else
        {
            p[i] = actualWItem;
            if (wPosition + 1 < wlenght)
                wPosition++;
        }
    }
    return p;
}

int main(void)
{
    int v[5] = {12, 39, 61, 75, 99};
    int w[4] = {28, 40, 55, 81};
    int *p = merge(v, 5, w, 4);
    for (int i = 0; i < 9; i++)
        printf("%d\n", p[i]);
    free(p);
    return 0;
}