#include <stdio.h>
#include <math.h>

typedef struct {
 int x;
 int y;
} Ponto;

Ponto le_ponto(int n){
	Ponto p;
	printf("%dº ponto: ", n);
	scanf("%d,%d", &p.x, &p.y);
	return p;
}
float distancia(Ponto p1, Ponto p2){
	return sqrt(pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2));
}
int main(void){
 Ponto a = le_ponto(1);
 Ponto b = le_ponto(2);
 printf("Distancia: %1.f\n", distancia(a, b));
 return 0;
}
