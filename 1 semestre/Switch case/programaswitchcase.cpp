#include <stdio.h>
int main(){	
	//programa de switch case que mostra o nome do mês
	
	int mes;
	printf("Digite o numero do mes que desejo conhecer:");
	scanf("%d", &mes); 
	
	switch (mes) {  //só aceita int e char
	
		case 1: printf("Janeiro"); break; //break serve para encerrar o switch quando encontrar um verdadeiro.
		case 2: printf("Fevereiro"); break;
		case 3: printf("Março"); break;
		case 4: printf("Abril"); break;
		case 5: printf("Maio"); break;
		case 6: printf("Junho"); break;
		case 7: printf("Julho"); break;
		case 8: printf("Agosto"); break;
		case 9: printf("Setembro"); break;
		case 10: printf("Outubro"); break; 
		case 11: printf("Novembro"); break;
		case 12: printf("Dezembro"); break;
		default: printf("Mes invalido!"); break;
	}
}
