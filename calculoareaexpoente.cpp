#include <stdio.h> 
#include <math.h>

int main(){
	float base, expo, calculo;

	printf("Insira o valor da base:\n");
	scanf("%f",&base);
	printf("Insira o valor do expoente:\n");
	scanf("%f",&expo);
	
	calculo= pow(base, expo);
	printf("O resultado foi: %.2f", calculo);
	
}
