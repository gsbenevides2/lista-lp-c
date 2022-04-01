#include <stdio.h>
#include <string.h>

int main(void) {
 char s[513];
 printf("Senha?	");
 gets(s);
 // No linux o _strricmp é substituido por strcasecmp
 if(strcasecmp(s,"Abracadabra") == 0) puts("Senha correta!");
 else puts("Senha incorreta!");
 return 0;
}
