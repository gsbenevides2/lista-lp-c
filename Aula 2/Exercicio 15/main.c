#include <stdio.h>

int main(void)
{
    float imc;
    printf("Qual � seu IMC? ");
    scanf("%f", &imc);
    printf("Voc� est� ");
    if (imc < 18.5)
        printf("magro");
    else if (imc <= 30)
        printf("normal");
    else
        printf("obeso");
    printf(".\n");
    return 0;
}
