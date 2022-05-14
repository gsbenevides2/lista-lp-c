#include <stdio.h>

typedef struct {
 char titulo[30];
 char autor[30];
 int ano;
}	Livro;

void exibirLivros(Livro livros[], int n) {
 for (int i = 0; i < n; i++) {
	printf("Titulo: %s\n", livros[i].titulo);
	printf("Autor: %s\n", livros[i].autor);
	printf("Ano: %d\n", livros[i].ano);
 }
}

int main(void){
 Livro livros[] = {{"Frankenstein", "Mary Shelley", 1818},
									 {"Dracula","Bram Stoker",1897},
									 {"Carmilla", "Sheridan Le Fanu", 1872},
									 {"Varney","Thomas Prest", 1847}};
	exibirLivros(livros, 4);
	return 0;
}
