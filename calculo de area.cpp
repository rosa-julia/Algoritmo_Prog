//calcular area = pi * raio�
#include <stdio.h> 
#include <math.h>
#define PI 3.13159
int main(){
	float raio, area;
	
	printf("Digite o valor do raio\n");
	scanf("%f", &raio); //raio � um dado de entrada
	
	area= PI * pow(raio,2); //area � um dado de sa�da
	
	printf("Area: %f", area);
	
}
