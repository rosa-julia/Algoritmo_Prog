#include <stdio.h>
int main(){
	int valorA, valorB, restoDivisao, valorDivisao;
	
	printf("Digite o valor A\n");
	scanf("%d", &valorA);
	printf("Digite o valor B\n");
	scanf("%d", &valorB);
	//calculos
	restoDivisao = valorA % valorB;
	valorDivisao = valorA / valorB;
	//apresentar resultados
	printf("Resto: %d\n", restoDivisao);
	printf("Valor: %d\n",valorDivisao);
	
}
