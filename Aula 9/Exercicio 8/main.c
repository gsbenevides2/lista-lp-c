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
float perimetro(Ponto p1, Ponto p2, Ponto p3, Ponto p4){
	return distancia(p1,p2) + distancia(p2,p3) + distancia(p3,p4) + distancia(p4,p1);
}
int main(){
	Ponto p1, p2, p3, p4;
	p1 = le_ponto(1);
	p2 = le_ponto(2);
	p3 = le_ponto(3);
	p4 = le_ponto(4);
	printf("Perimetro: %.2f\n", perimetro(p1,p2,p3,p4));
	return 0;
}
