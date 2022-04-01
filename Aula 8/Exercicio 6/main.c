#include <stdio.h>
#include <ctype.h>

int len(char s[]){
 	int i = 0;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}

void upr(char s[]){
	for(int i = 0; i < len(s); i++){
		s[i] = toupper(s[i]);
	}
}

int main(void){
 char v[10] = "Teste";
 upr(v);
 puts(v);
 return 0;
}
