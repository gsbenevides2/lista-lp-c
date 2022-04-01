#include <stdio.h>
#include <string.h>

int main(void) {
 char s[513];
 printf("Senha?	");
 gets(s);
 if(strcmp(s,"Abracadabra") == 0) puts("Senha correta!");
 else puts("Senha incorreta!");
 return 0;
}
