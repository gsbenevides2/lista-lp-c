#include <stdio.h>

typedef struct
{
	int origem;
	int destino;
} Via;

void exibe(int r[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", r[i]);
	printf("\b.\n");
}

int pertence(int x, int r[], int n)
{
	for (int i = 0; i < n; i++)
		if (r[i] == x)
			return 1;
	return 0;
}

void rotas(int x, int y, Via v[], int n, int p)
{
	static int r[100], i = 0;
	r[i++] = x;
	if (i == p)
	{
		exibe(r, i);
	}
	else if (x == y)
	{
		exibe(r, i);
	}
	else
	{
		for (int j = 0; j < n; j++)
		{
			if (v[j].origem == x && !pertence(v[j].destino, r, i))
				rotas(v[j].destino, y, v, n, p);
		}
	}
	i--;
}

int main(void)
{
	int p;
	Via v[10] = {{1, 2}, {1, 3}, {2, 1}, {2, 4}, {3, 2}, {3, 4}, {3, 5}, {4, 3}, {4, 5}, {5, 4}};
	printf("Qual profundidade desejas (1 a 5)?");
	scanf("%d", &p);
	rotas(1, 5, v, 10, p);
	return 0;
}
