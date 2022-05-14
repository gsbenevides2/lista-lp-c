#include <stdio.h>

int len(char *s)
{
    int count = 0;
    while (*s)
    {
        count++;
        s++;
    }
    return count;
}

int main(void)
{
    printf("%d\n", len("teste"));
    return 0;
}