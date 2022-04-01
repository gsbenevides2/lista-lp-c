#include <stdio.h>


void hanoi(int n, char origem, char auxiliar, char destino) {
	if (n == 1) {
		printf("%d %c -> %c\n", n , origem, destino);
	} else {
		hanoi(n - 1, origem, destino, auxiliar);
		printf("%d %c -> %c\n",n, origem, destino);
		hanoi(n - 1, auxiliar, origem, destino);
	}
}

int main() {
	hanoi(3, 'A', 'B', 'C');
	return 0;
}
