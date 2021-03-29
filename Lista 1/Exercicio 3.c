#include <stdio.h>

int main(){
	printf("Insira os 3 numeros:\n");
	float a, b, c;
	scanf("%f %f %f",&a,&b,&c);
	float media = (a + b + c)/3.0;
	printf("Media aritmetica = %.2f\n",media);
	return 0;
}
