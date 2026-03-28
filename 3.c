#include <stdio.h>

int main(){

	float prod1; 
	float prod2; 
	float soma; 

	printf("Valor do primeiro produto: "); 
	scanf("%f",&prod1); 

	printf("Valor do segundo produto: "); 
	scanf("%f",&prod2); 

	soma = prod1 + prod2;
	
	printf("Valor total: %.2f ",soma);

	return 0;

}  
