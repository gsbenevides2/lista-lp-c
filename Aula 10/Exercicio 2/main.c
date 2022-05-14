#include <stdio.h>

int main(void)
{
    float x = 2.0, y = 3.5;
    float *p = &x, *q = &y;
    printf("%.1f\n", *p * *p);
    return 0;
}