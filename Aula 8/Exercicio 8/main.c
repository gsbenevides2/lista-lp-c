#include <stdio.h>

int len(char s[]){
 	int i = 0;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}

int pos(char c, char s[]){
 for(int i = 0; i < len(s); i++){
		if(s[i] == c){
			return i;
		}
	}
 	return -1;
}

int main(void){
 char v[10] = "35171";
 printf("Posicao do 1:	%d\n", pos('1', v));
 printf("Posicao do 9:	%d\n", pos('9', v));
 return 0;
}
