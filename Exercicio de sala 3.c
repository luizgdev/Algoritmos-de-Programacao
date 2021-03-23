//Inclusão das bibliotecas necessárias para o funcionamento do código: 

//Biblioteca padrão
#include <stdio.h>
//Biblioteca matemática para o uso da função exponencial "pow(variável base, variável expoente)" e  da função raiz quadrada "sqrt(variável)"
#include <math.h>

//Inicio do código: função main
int main(){

//Inicialização das variáveis em double para armazenar os valores com precisão
  double a, b, c;

//Função scanf para armazenar os valores das variáveis na memória
  scanf("%lf %lf %lf",&a,&b,&c);

//If else para separar os casos inválidos dos casos válidos
//De acordo com a formula, se "ax^2 = 0"  então não é possível calcular
//Portanto se a = 0 o programa irá imprimir na tela a mensagem "Impossivel calcular" e encerrar o processo
  if (a == 0) {
    printf("Impossivel calcular\n");
  }
//Caso seja válido é inicializada a variável delta que executa a primeira parte da formula com a função pow
    else {
    double delta;
    delta = pow(b,2) - 4 * a * c;

//De acordo com a formula se o delta for negativo não é possível calcular
//Portanto o if else separa o caso inválido do válido, assim como anteriormente
    if (delta < 0) {
      printf("Impossivel calcular\n");
    } 
//Caso seja válido o else inicia duas variáveis, x1 e x2, que serão o resultado do calculo
      else {
      double x1, x2;

//Uso final da formula de bhaskara com o uso da função sqrt e impressão dos resultados com a função printf
      x1 = (-b + sqrt(delta)) / (2 * a);
      printf("R1 = %.5lf\n",x1);
      x2 = (-b - sqrt(delta)) / (2 * a);
      printf("R2 = %.5lf\n",x2);
    }
  }

//fim do programa
  return 0;
}


