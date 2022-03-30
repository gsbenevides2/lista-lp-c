/*
Contestação do Enunciado: Professor a finalidade do Teorema de Pitagoras é de calcular um dos lados do triangulo retânguno, não calcular a distância entre dois pontos no plano cartesiano, para isso utiliza-se essa formula: https://cdn.discordapp.com/attachments/944363583775572039/944363659449204796/Screenshot_20220218_193452.png baseada na formula de Pitagoras.
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
 int xp, yp, xq, yq, distance;
 printf("Calculo de Distância dos Pontos Q e P\n");
 printf("Insira as coordenadas na respecitiva ordem (xp yp xq yq - somente inteiros): ");
 scanf("%d %d %d %d", &xp, &yp, &xq, &yq);
 distance = sqrt(pow(xq - xp, 2) + pow(yq - yp, 2));
 printf("A distancia é: %d\n", distance);
 return 0;
}
