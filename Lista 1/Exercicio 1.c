#include <stdio.h>

int main() {
	printf("Insira as horas: ");
	int horas;
	scanf("%d",&horas);
	int minutos = (horas * 60);
	int segundos = (minutos * 60);
	printf("\nHoras = %d\n",horas);
	printf("Minutos = %d\n",minutos);
	printf("Segundos = %d\n",segundos);
	return 0;
}
