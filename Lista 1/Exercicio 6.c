#include<stdio.h>

int main(){
	double a, b;
	printf("Digite a primeira nota: ");
	scanf("%lf",&a);
	printf("\nDigite a segunda nota: ");
	scanf("%lf",&b);
	double media = ((a * 3.5) + (b * 7.5))/11.0;
	printf("\nA media eh: %.2lf\n",media);
	
	return 0;
}
