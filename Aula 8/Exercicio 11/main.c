#include <stdio.h>

void exibe(char v[][8], int n){
 for (int i = 0; i < n; i++){
	puts(v[i]);
 }
}


int main(void){
 char v[][8] = {
	"Bruno",
	"Eduardo",
	"Catia",
	"Ana",
	"Denise",
	"Beatriz",
 };
 exibe(v,6);
 return 0;
}
