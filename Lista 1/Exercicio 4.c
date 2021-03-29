#include <stdio.h>

int main(){
	printf("Insira os dois numeros: \n");
	int a, b;
	scanf("%d %d",&a,&b);
	int modulo = a%b;
	int quociente = a/b;
	printf("Modulo = %d\n",modulo);
	printf("Quociente = %d\n",quociente);
	return 0;
}
