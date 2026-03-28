#include <stdio.h> 


int main(){ 
	char nome[30]; 
	int idade;
	char sexo; 

	printf("Nome: ");
	scanf ("%29s", &nome); 

	printf("Idade: "); 
	scanf("%d", &idade); 

	printf("Sexo(M/F): ");
	scanf(" %c", &sexo); 

	printf ("Nome: %s\n",nome);  
	printf ("Idade: %d anos\n",idade); 
	printf ("Sexo: %c\n",sexo); 


	return 0;
	
} 
