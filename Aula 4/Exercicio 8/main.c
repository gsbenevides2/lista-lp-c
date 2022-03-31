#include <stdio.h>
#include <ctype.h>

char minuscula(char c)
{
 return tolower(c);
}
int main(void)
{
 char c;
 printf("Letra? ");
 scanf("%c", &c);
 printf("Minuscula: %c\n", minuscula(c));
 return 0;
}
