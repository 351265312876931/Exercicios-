#include <stdio.h> 

int main(){

	char nome[30]; 
	char sexo; 

	printf("Nome: ");
	scanf("%29s",nome); 

	printf("Sexo:(M/F) ");
	scanf(" %c",&sexo);

	printf("Funcionario: %s\n",nome); 
	printf("Sexo: %c",sexo); 

	return 0; 
} 

