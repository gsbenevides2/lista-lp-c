#include <stdio.h>

int main(void)
{
 float x, y;
 char o;
 printf("Express�o? ");
 scanf("%f %c %f", &x, &o, &y);
 switch (o)
 {
	case '+':
	 printf("Valor = %.2f\n", x + y);
	 break;
	case '-':
	 printf("Valor = %.2f\n", x - y);
	 break;
	case 'x':
	case '*':
	 printf("Valor = %.2f\n", x * y);
	 break;
	case ':':
	case '/':
	 if (y == 0)
		printf("N�o � possivel dividir por zero.\n");
	 else
		printf("Valor = %.2f\n", x / y);
	 break;
	default:
	 printf("Operador Invalido: %c\n", o);
 }
 return 0;
}
