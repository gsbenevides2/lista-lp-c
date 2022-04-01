#include <stdio.h>

int len(char s[]){
 	int i = 0;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}

int ocorrencias(char c, char s[]){
 int count = 0;
 for (int i = 0; i < len(s); i++){
		if (s[i] == c){
			count++;
		}
	}
 return count;
}

int main(void){
 char v[] = "banana";
 printf("Ocorrencias: %d\n",ocorrencias('a',v));
 return 0;
}
