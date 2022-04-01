#include <stdio.h>
#include <string.h>

void exibe(char v[][8], int n){
 for (int i = 0; i < n; i++){
	puts(v[i]);
 }
}

void bsort(char v[][8], int n){
	char aux[8];

	for (int i = 0; i < n - 1; i++){
	for (int j = 0; j < n - 1; j++){
		if (strcmp(v[j], v[j + 1]) > 0){
			strcpy(aux, v[j]);
			strcpy(v[j], v[j + 1]);
			strcpy(v[j + 1], aux);
		}
	}
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
bsort(v, 6);
 exibe(v,6);
return 0;
}
