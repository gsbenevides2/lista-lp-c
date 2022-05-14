#include <stdio.h>

int main(void)
{
    char x = 'A';
    char *p = &x;
    *p = *p + 3;
    printf("%c\n", x);
    return 0;
}