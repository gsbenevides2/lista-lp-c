#include <stdio.h>

typedef struct{
 int dia;
 int mes;
 int ano;
} Data;
typedef struct {
 int codigo;
 char nome[30];
 float salario;
 Data admissao;
} Funcionario;

int exibetab(Funcionario v[], int n){
	for(int i=0;i<n;i++){
		printf("\nCodigo: %d", v[i].codigo);
		printf("\nNome: %s", v[i].nome);
		printf("\nSalario: %.2f", v[i].salario);
		printf("\nAdmissao: %d/%d/%d", v[i].admissao.dia, v[i].admissao.mes, v[i].admissao.ano);
	}
}

int main(void){
 Funcionario v[] = {{561, "Eva Maranhao", 9200.00, {2,7,2012}},
									 {295, "Ana Teixeira", 6100.00,{5,9,2015}},
 									 {473, "Denise Lagoa", 8500.00,{1,6,2013}},
									 {102, "Catia Telles", 7300.00,{3,8,2014}},
									 {384,"Beatriz Lira", 5400.00, {4,9,2016}}};
 exibetab(v, 5);
 return 0;
}
