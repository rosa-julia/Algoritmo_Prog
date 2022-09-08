#include <stdio.h>
int main(){
	float numero1, numero2, numero3, media;
	
	printf("Digite o numero 1\n");
	scanf("%f", &numero1);
	printf("Digite o numero 2\n");
	scanf("%f", &numero2);
	printf("Digite o numero 3\n");
	scanf("%f", &numero3);
	
	media = (numero1+numero2+numero3)/3;
	printf("Media: %.2f", media);
	
	
	
}
