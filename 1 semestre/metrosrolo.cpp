#include <stdio.h>
#define METROSROLO 50
int main(){
	int metros, rolos, metrosAvulsos;
	
	printf("Digite o valor A\n");
	scanf("%d", &metros);
	rolos = metros / METROSROLO;
	metrosAvulsos= metros % METROSROLO;
	
	printf("Rolos: %d\n", rolos);
	printf("Metros avulsos: %d", metrosAvulsos);
	
	printf("Voce precisa de %d rolos e %d metros avulsos", rolos, metrosAvulsos);
}
