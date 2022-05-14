#include <stdio.h>

float soma(float *v, int n)
{
    float counter = 0;
    for (int i = 0; i < n; i++)
    {
        counter += v[i];
    }

    return counter;
}

int main(void)
{
    float v[3] = {2.5, 1.5, 3.0};
    printf("%.1f\n", soma(v, 3));
    return 0;
}