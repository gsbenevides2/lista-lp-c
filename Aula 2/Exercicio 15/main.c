#include <stdio.h>

int main(void)
{
    float imc;
    printf("Qual é seu IMC? ");
    scanf("%f", &imc);
    printf("Você está ");
    if (imc < 18.5)
        printf("magro");
    else if (imc <= 30)
        printf("normal");
    else
        printf("obeso");
    printf(".\n");
    return 0;
}
