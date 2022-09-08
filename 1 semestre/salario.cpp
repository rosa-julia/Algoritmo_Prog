#include <stdio.h>
int main (){
	char nome[100]; //string - cadeia de caracteres
	char sexo; //caracter
	int nMatricula, nHorasTrabalhadas;
	float valorPorHora, salario;
	
	printf("Digite o nome: \n");
	scanf("%s", &nome);
	printf("Digite o numero de matricula: \n");
	scanf("%d", &nMatricula);
	printf("Digite o sexo: \n");
	scanf("%c", &sexo);
	printf("Digite o numero de horas trabalhadas: \n");
	scanf("%d", &nHorasTrabalhadas);
	printf("Digite o valor por hora trabalhada \n");
	scanf("%f", &valorPorHora);
	
	salario = nHorasTrabalhadas * valorPorHora;
	
	printf("Funcionario: %s\n",nome);
	printf("Numero de matricula: %d\n", nMatricula);
	printf("Sexo: %c\n", &sexo);
	printf("Numero de Horas trabalhadas: %d\n", nHorasTrabalhadas);
	printf("Valor por hora trabalhada: %.2f\n", valorPorHora);
	printf("------------------");
	printf("Salario: %.2f", salario);
	
	
}
