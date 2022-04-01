#include <stdio.h>

void troca(int v[], int i, int j) {
 int x = v[i];
 v[i] = v[j];
 v[j] = x;
}
void empurra(int v[],int n){
 troca(v,n,n+1);
}
void bsort(int v[],int n){
 for(int i = 0; i < n; i++) {
	for(int j = 0; j < n - 1; j++) {
	 if(v[j] > v[j + 1]) {
		empurra(v, j);
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
 int v[5]={48,19,31,52,27};
 bsort(v,5);
 exibe(v, 5);
 return 0;
}
