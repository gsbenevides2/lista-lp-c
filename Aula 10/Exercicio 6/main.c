#include <stdio.h>
#include <string.h>

typedef struct
{
    int codigo;
    char nome[30];
    float salario;
} Funcionario;

int cmp_c(Funcionario funcionario1, Funcionario funcionario2)
{
    return funcionario1.codigo > funcionario2.codigo;
}

int cmp_n(Funcionario funcionario1, Funcionario funcionario2)
{
    return strcmp(funcionario1.nome, funcionario2.nome) > 0;
}

int cmp_s(Funcionario funcionario1, Funcionario funcionario2)
{
    return funcionario1.salario > funcionario2.salario;
}

void troca(Funcionario funcionarios[], int p)
{
    Funcionario auxiliar = funcionarios[p];
    funcionarios[p] = funcionarios[p + 1];
    funcionarios[p + 1] = auxiliar;
}

int ordena(int (*cmp)(Funcionario, Funcionario), Funcionario v[], int n)
{
    for (int l = 0; l < n; l++)
    {
        for (int a = 0; a < n - 1; a++)
        {
            Funcionario funcionario1 = v[a];
            Funcionario funcionario2 = v[a + 1];
            if (cmp(funcionario1, funcionario2))
                troca(v, a);
        }
    }
}

int exibe(Funcionario v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nCodigo: %d", v[i].codigo);
        printf("\nNome: %s", v[i].nome);
        printf("\nSalario: %.2f", v[i].salario);
    }
    printf("\n");
}

int main(void)
{
    Funcionario v[5] = {{
                            561,
                            "Eva Maranhao",
                            9200.00,
                        },
                        {
                            295,
                            "Ana Teixeira",
                            6100.00,
                        },
                        {
                            473,
                            "Denise Lagoa",
                            8500.00,
                        },
                        {
                            102,
                            "Catia Telles",
                            7300.00,
                        },
                        {
                            384,
                            "Beatriz Lira",
                            5400.00,
                        }};
    printf("Ordernar por 1-Codigo, 2-Nome ou 3-Salario? ");
    switch (getchar())
    {
    case '1':
        ordena(cmp_c, v, 5);
        break;
    case '2':
        ordena(cmp_n, v, 5);
        break;
    case '3':
        ordena(cmp_s, v, 5);
        break;
    }
    exibe(v, 5);
    return 0;
}