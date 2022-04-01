#include <stdio.h>

void troca(int v[], int i, int j) {
 int x = v[i];
 v[i] = v[j];
 v[j] = x;
}
void empurra(int v[],int n){
 troca(v,n,n+1);
}
void bsr(int v[],int n){
 int ordenado = 1;
 for (int i = 0; i < n-1; i++) {
	if (v[i] > v[i+1]) {
	 empurra(v,i);
	 ordenado = 0;
	}
 }
 if (!ordenado) {
	bsr(v,n);
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
 bsr(v,5);
 exibe(v, 5);
 return 0;
}
