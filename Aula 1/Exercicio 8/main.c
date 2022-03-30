#include <stdio.h>

int main(void)
{
 float kmPercorridos, litrosGastos, consumoMedio;
 printf("Calculadora de Consumo Médio do Carro\n");
 printf("Qual a distância percorrida pelo carro? ");
 scanf("%f", &kmPercorridos);
 printf("Quantos litros foram gastos? ");
 scanf("%f", &litrosGastos);
 consumoMedio = litrosGastos / kmPercorridos;
 printf("O consumo médio de seu carro é de %.2f litros por quilômetro.\n", consumoMedio);
}
