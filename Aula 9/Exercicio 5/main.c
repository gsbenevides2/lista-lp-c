#include <stdio.h>
#include <string.h>

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

void ordenatab(Funcionario v[], int n){
	Funcionario aux;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(v[i].nome, v[j].nome)>0){
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
}
float total_salarios(Funcionario v[], int n){
	float total=0;
	for(int i=0;i<n;i++){
		total+=v[i].salario;
	}
	return total;
}

int main(void){
 Funcionario v[] = {{561, "Eva Maranhao", 9200.00, {2,7,2012}},
									 {295, "Ana Teixeira", 6100.00,{5,9,2015}},
 									 {473, "Denise Lagoa", 8500.00,{1,6,2013}},
									 {102, "Catia Telles", 7300.00,{3,8,2014}},
									 {384,"Beatriz Lira", 5400.00, {4,9,2016}}};
 ordenatab(v,5);
 exibetab(v, 5);
 printf("\nTotal de salarios: %.2f", total_salarios(v,5));
 return 0;
}
