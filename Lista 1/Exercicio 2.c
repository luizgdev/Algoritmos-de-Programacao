#include <stdio.h>
#include <math.h>

int main(){
	printf("Insira o valor do raio: ");
	float raio;
	scanf("%f",&raio);
	float area = (3.14 * pow(raio,2));
	printf("Area = %.3f\n",area);
	return 0;
}
