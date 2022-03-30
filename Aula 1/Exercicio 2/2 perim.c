/* PERIM.C - informa o perímetro da circuferência */

#include <stdio.h>

int main(void)
{
 float raio, perim;
 printf("Qual o raio? ");
 scanf("%f", &raio);      // solicita o raio da circuferencia
 perim = 2 * 3.14 * raio; // calcula o perímetro
 printf("Perimetro = %f\n", perim);
 return 0;
}
