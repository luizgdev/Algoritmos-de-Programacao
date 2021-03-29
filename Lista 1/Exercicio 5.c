#include <stdio.h>

int main(){
	printf("Digite a quantidade de metros de fio desejada: ");
	int qtd;
	scanf("%d",&qtd);
	if(qtd >= 50)
		printf("\nA quantidade de rolos necessaria eh: %d.\n",(qtd/50));
	else
		printf("\nA quantidade de metros de fios avulsos necessaria eh: %d.\n",qtd);
		
	return 0;
}
