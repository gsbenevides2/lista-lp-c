#include <stdio.h>
#include <ctype.h>
#define maiuscula(c) (isupper(c))

int main(void)
{
 char x;
 printf("Caractere? ");
 scanf("%c", &x);
 printf("Maiuscula: %s\n", maiuscula(x) ? "sim" : "não");
 return 0;
}
