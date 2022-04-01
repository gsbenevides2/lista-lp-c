#include <stdio.h>

void preenche(int v[7])
{
 for (int i = 0; i < 7; i++)
 {
	printf("%da temperatura? ", i + 1);
	scanf("%d", &v[i]);
 }
}

float media(int v[7])
{
 int result = 0;
 for (int i = 0; i < 7; i++)
 {
	result += v[i];
 }
 return result / 7;
}

int conta(int v[7], float m)
{
 int result = 0;
 for (int i = 0; i < 7; i++)
 {
	if (v[i] > m)
	 result++;
 }
 return result;
}

int main(void)
{
 float v[7];
 preenche(v);
 float m = media(v);
 printf("Media %.1f °C\n", m);
 printf("Dias acima da média: %d\n", conta(v, m));
}
