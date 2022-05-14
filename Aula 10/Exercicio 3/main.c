#include <stdio.h>

void minmax(int v[], int n, int *min, int *max)
{
    int minA, maxA;
    for (int i = 0; i < n; i++)
    {
        int currentValue = v[i];

        if (currentValue < minA)
            minA = currentValue;
        if (maxA < currentValue)
            maxA = currentValue;
    }
    *min = minA;
    *max = maxA;
}

int main(void)
{
    int v[5] = {26, 55, 89, 14, 77};
    int min, max;
    minmax(v, 5, &min, &max);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    return 0;
}