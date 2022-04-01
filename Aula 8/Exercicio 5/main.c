#include <stdio.h>

int len(char s[]){
 	int i = 0;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}
void cat(char v[],char w[]){
 int size = len(v);
 for(int i = 0; i < len(w); i++){
		v[size + i] = w[i];
 }
}

int main(void){
 char v[10] = "aba";
 char w[10] = "cate";
 cat(v,w);
 puts(v);
 return 0;
}
