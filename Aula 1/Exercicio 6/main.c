#include <stdio.h>

int main(void)
{
 int d;
 printf("Decimal? ");
 scanf("%d", &d);
 printf("ASCII em octal = %o\n", d);
 printf("ASCII em caractere = %c\n", d);
 printf("ASCII em hexadecimal %X\n", d);
 return 0;
}
