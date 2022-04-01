#include <stdio.h>

int len(char s[]){
	int i = 0;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}
int main(void){
 char v[10] = "teste";
 printf("Comprimento: %d\n",len(v));
}
