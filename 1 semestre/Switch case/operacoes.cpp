#include <stdio.h>
#include <math.h>
int main(){	
	
	char operador;
	int n1, n2, resultado;
	
	printf("Qual operacao voce quer realizar? \n");
	scanf("%c", &operador); 
	printf("Digite dois numeros \n");
			scanf("%d%d", &n1, &n2);
	
	
	switch (operador) {  //apenas int e char, nao aceita string
		case '+':
			resultado = n1 + n2;
			printf("Soma: %d", resultado);
		break;
		
	case '-':
		resultado = n1 - n2;
		printf("Subtracao: %d", resultado);
	break;
	
	case '*':
		resultado = n1 * n2;
		printf("Multiplicacao: %d", resultado);
	break;
	
	case '/':
		resultado = n1 / n2;
		printf("Divisao: %d", resultado);
	break;
	
	case '^':
		resultado = pow (n1,n2);
		printf("Potencia: %d", resultado);
	
	
	default: 
		printf("Operacao invalida!");
	break;
	
	}

}
	
	
	
	
