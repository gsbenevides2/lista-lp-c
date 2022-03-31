#include <stdio.h>

void troca(int v[], int i, int j) {
 int x = v[i];
 v[i] = v[j];
 v[j] = x;
}
void bsort(int v[],int n){
 for(int i = 0; i < n; i++) {
	for(int j = 0; j < n - 1; j++) {
	 if(v[j] > v[j + 1]) {
		troca(v, j, j + 1);
	 }
	}
 }
}
int exibe(int v[], int n) {
 for(int i = 0; i < n; i++) {
	printf("%d ", v[i]);
 }
 printf("\n");
}

int main(void){
 int v[10] = {83,31,91,46,27,20,96,25,96,80};
 bsort(v, 10);
 exibe(v, 10);
 return 0;
}
