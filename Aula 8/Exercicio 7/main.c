#include <stdio.h>
int len(char s[]){
 	int i = 0;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}
int elevar(int x, int y){
	int i, resultado = 1;
	for(i = 0; i < y; i++){
		resultado *= x;
	}
	return resultado;
}

int val(char s[]){
	int size = len(s);
	int i = 0;
	int sum = 0;
	while(i < size){
	 int digito = s[i] - '0';
	 printf("%d\n", digito);
		sum += (digito * (elevar(10,size - (i+1))));
		i++;
	}
	return sum;
}

int main(){
	char v[10] = "351";
	printf("Valor %d\n", 2*val(v));
	return 0;
}
