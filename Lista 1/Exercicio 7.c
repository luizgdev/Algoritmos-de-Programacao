#include<stdio.h>
#include<string.h>

int main(){
	char nome[50];
	int matricula;
	int valor_hora;
	printf("Digite o nome do funcionario: ");
	gets(nome);
	printf("\nDigite o sexo do funcionario: ");
	char sexo = getchar();
	printf("\nDigite a matricula do funcionario: ");
	scanf("%d",&matricula);
	printf("\nDigite o valor que o funcionario recebe por hora: ");
	scanf("%d",&valor_hora);
	int salario = (((valor_hora * 8) * 5) * 3);
	printf("\n");
	printf("Nome: %s\n",nome);
	printf("Sexo: %c\n",sexo);
	printf("Matricula: %d\n",matricula);
	printf("Salario: R$%d\n",salario);
	
	return 0;
}
