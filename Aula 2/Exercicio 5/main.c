#include <stdio.h>

int main(void)
{
 float num1, num2;
 printf("Informe dois números distintos? ");
 scanf("%f %f", &num1, &num2);
 if (num1 == num2)
	printf("O %f é igual á %f.\n", num1, num2);
 else if (num1 > num2)
	printf("O %f é maior que %f.\n", num1, num2);
 else
	printf("O %f é maior que %f.\n", num2, num1);
 return 0;
}
