#include <stdio.h>

int main(void)
{
 float kmPercorridos, litrosGastos, consumoMedio;
 printf("Calculadora de Consumo M�dio do Carro\n");
 printf("Qual a dist�ncia percorrida pelo carro? ");
 scanf("%f", &kmPercorridos);
 printf("Quantos litros foram gastos? ");
 scanf("%f", &litrosGastos);
 consumoMedio = litrosGastos / kmPercorridos;
 printf("O consumo m�dio de seu carro � de %.2f litros por quil�metro.\n", consumoMedio);
}
