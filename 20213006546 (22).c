#include <stdio.h>

int mult(int base, int exp);
int main(){
	int num;
	int expoente,resultado;
	
	printf("Digite a base e o expoente inteiros: ");
	scanf("%i %i", &num, &expoente);
	resultado=mult(num,expoente);
	printf("Resultado: %i\n", resultado);

}

int mult(int base, int exp){
	int num=base;
	if(exp>1){
	
		exp=exp-1;
		num=base*mult(num,exp);
		
		
	}
	else if(exp==0){
		num= 1;
	}
	return num;

}
