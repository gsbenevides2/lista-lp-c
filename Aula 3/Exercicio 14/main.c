#include <stdio.h>
#include <math.h>

int main(void)
{
 int n, d, notPrime = 0;
 printf("Numero? ");
 scanf("%d", &n);
 for (d = 2; d <= ceil(sqrt(n)); d++)
	if (n % d == 0)
	{
	 notPrime = 1;
	 break;
	}
 if (notPrime == 0)
	puts("� primo!");
 else
	puts("N�o � primo!");
}
