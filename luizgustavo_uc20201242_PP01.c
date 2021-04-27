//Nomecompleto: Luiz Gustavo da Costa Gonçalves Matrícula: UC20201242 Curso: Ciência da Computação
#include<stdio.h> //Biblioteca que disponibiliza entrada e saída de dados dentro do programa.
#include<locale.h> //Biblioteca que contém operações comuns como tratamento de entrada/saída e cadeia de caracteres.
#include<stdlib.h> //Biblioteca que envolve alocação de memória, controle de processos, conversões e outras funções.
#include<string.h> //Biblioteca que fornece funções, macros e definições para manipulação de cadeias de caracteres e regiões de memória.

int main()
{
    //O nome das variáveis foi escolhido com base no conceito de serem claras no seu proposito, como no livro código limpo.
    int quantidade_de_sessoes; //Variável do tipo inteiro para armazenar a quantidade de sessões que o cinema apresentou.
    int quantidade_de_pessoas; //Variável do tipo inteiro para armazenar a quantidade de pessoas que compareceram as sessões.
    int quantidade_masculino = 0; //Variável do tipo inteiro para armazenar a quantidade de pessoas do sexo masculino que compareceram as sessões.
    int quantidade_feminino = 0; //Variável do tipo inteiro para armazenar a quantidade de pessoas do sexo feminino que compareceram as sessões.
    int quantidade_de_criancas = 0; //Variável do tipo inteiro para armazenar a quantidade de crianças que compareceram as sessões.
    int quantidade_de_adolescentes = 0; //Variável do tipo inteiro para armazenar a quantidade de adolescentes que compareceram as sessões.
    int quantidade_de_adultos = 0; //Variável do tipo inteiro para armazenar a quantidade de adultos que compareceram as sessões.
    int quantidade_de_idosos = 0; //Variável do tipo inteiro para armazenar a quantidade de idosos que compareceram as sessões.
    int quantidade_adultos_m = 0; //Variável do tipo inteiro para armazenar a quantidade de adultos do sexo masculino que compareceram as sessões.
    int quantidade_adultos_f = 0; //Variável do tipo inteiro para armazenar a quantidade de adultos do sexo feminino que compareceram as sessões.
    int idade; //Variável do tipo inteiro para armazenar a idade das pessoas que compareceram as sessões.
    int i; //Variável do tipo inteiro para armazenar valores genericos.
	double avaliacao = 0; //Variável do tipo double para armazenar as avaliações individuais do filme.
    double avaliacao_total = 0; //Variável do tipo double para armazenar a soma das avaliações individuais do filme.
    double valor_do_ingresso; //Variável do tipo double para armazenar o valor do ingresso.
    char nome_do_filme[50]; //Variável do tipo char para armazenar o nome do filme.
    char genero; //Variável do tipo char para armazenar o gênero das pessoas que compareceram as sessões.
    char escolha; //Variável do tipo char para armazenar a escolha final de ver mais estatísticas sobre as sessões.

    setlocale(LC_ALL,"Portuguese"); //Função da biblioteca locale.h que habilita o uso de acentuação da lingua portuguesa nos printfs.

    //Printfs para interação com o usuário.
    printf("Seja Bem-vindo ao aplicativo de estatísticas!\n\n");
    printf("Para começar insira a quantidade de sessões do filme que deseja analisar.\n");
    printf("Lembrando que para o funcionamento correto do aplicativo é necessario analisar 2 sessões.\n");
    printf("\nInsira a quantidade de sessões: ");
    scanf("%d", &quantidade_de_sessoes); //Armazenamento da quantidade de sessões que serão utilizadas para a coleta de dados.

    //Verificação da variável quantidade_de_pessoas.
    do
    {
        if(quantidade_de_sessoes < 2 || quantidade_de_sessoes > 2)
        {
            printf("\nVocê inseriu \"%d\", essa quantidade é inválida.\n", quantidade_de_sessoes);
            printf("Lembrando que para o funcionamento correto do aplicativo é necessario analisar 2 sessões.\n");
            fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
            printf("\nInsira a quantidade de sessões: ");
            scanf("%d",&quantidade_de_sessoes); //Releitura da variável no caso dela for diferente do valor 2.
        }
    }
    while(quantidade_de_sessoes < 2 || quantidade_de_sessoes > 2);

    //Printfs para interação com o usuário.
    printf("\nLegal, agora queremos saber o nome do filme.\n");
    printf("Lembre-se de não deixar o campo abaixo vazio.\n");
    printf("\nDigite o nome do filme: ");
    fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
    fgets(nome_do_filme, 50, stdin); //Armazenamento do nome do filme.
    //Verificação da variável nome_do_filme, caso ela seja igual a palavra "vazio" ou tenha apenas um caractere será feita a releitura.
    do
    {
        if(strncmp(nome_do_filme, "vazio", 5) == 0 || strlen(nome_do_filme) == 1)
        {
            printf("\nVocê inseriu um nome invalido.\n", nome_do_filme);
            printf("Lembre-se de não deixar o campo abaixo vazio.\n");
            printf("\nDigite o nome do filme: ");
            fflush(stdin);//função que limpa o buffer do teclado, usada para evitar erros inesperados.
            fgets(nome_do_filme, 50, stdin); //Releitura da variável.
        }
    }
    while(strncmp(nome_do_filme, "vazio", 5) == 0 || strlen(nome_do_filme) == 1);

    //Printfs para interação com o usuário.
    printf("\nUm clássico!\n");
    printf("\nAgora precisamos da quantidade de pessoas que assistiram ao filme.\n");
    printf("Lembre-se que cada sessão tem no mínimo 10 pessoas.\n");
    printf("\nQuantidade de pessoas na sessão: ");
    fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
    scanf("%d", &quantidade_de_pessoas); //Armazenamento da quantidade de pessoas que compareceram as sessões.

    //Verificação da variável quantidade_de_pessoas, caso ela seja menor que 2 será feita a releitura.
    do
    {
        if(quantidade_de_pessoas < 2)
        {
            printf("\nVocê inseriu \"%d\", esse número é inválido.\n", quantidade_de_pessoas);
            printf("Lembre-se que cada sessão tem no mínimo 10 pessoas.\n");
            printf("\nQuantidade de pessoas na sessão: ");
            fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
            scanf("%d", &quantidade_de_pessoas); //Releitura da variável.
        }
    }
    while(quantidade_de_pessoas < 2);

    //Printfs para interação com o usuário.
    printf("\nEstamos quase lá!\n");
    printf("Agora só precisamos saber o gênero e a idade das pessoas presente na sessão.\n");
    printf("Lembre-se de usar aspenas os caracteres \"M\" ou \"F\" independe de serem maiúsculos ou minúsculos.\n");
    printf("E que que a idade deve ser maior que 3 e menor que 100 anos.\n");

    //Loop for onde a leitura do gênero, idade e avaliação do filme serão feitas.
    for(i = 0; i < quantidade_de_pessoas; /*O incremento é feito durante o loop*/)
    {
        printf("\nInsira o gênero da %dº pessoa: ", (i + 1));
        fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
        genero = getchar(); //função getchar para armazenar a variável gênero
        if(genero == 'm' || genero == 'M')
        {
            quantidade_masculino++; //Toda vez que o gênero for masculino essa váriavel soma 1.
            printf("\nPara melhorar a qualidade das estatísticas por favor avalie o filme de 0 a 5 estrelas: ");
            fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
            scanf("%lf", &avaliacao); //Armazenamento da quantidade de pessoas que compareceram as sessões.

            //Verificação da variável avaliacao. Caso ela seja menor que 0 ou maior que 5 é feita a releitura.
            do
            {
                if(avaliacao < 0 || avaliacao > 5)
                {
                    printf("\nVocê inseriu \"%.0lf\", esse número é inválido.\n", avaliacao);
                    printf("Por favor avalie o filme de 0 a 5 estrelas.\n");
                    printf("\nInsira sua avaliação: ");
                    fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
                    scanf("%lf", &avaliacao); //releitura da variável.
                }
            }
            while(avaliacao < 0 || avaliacao > 5);

            avaliacao_total += avaliacao; //Após checar a variável avaliacao ela é somada a um total.
            avaliacao = 0; //Depois de ser somada ela tem o seu valor apagado para uma futura releitura.

            printf("\nInsira a idade da %dº pessoa: ", (i + 1));
            fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
            scanf("%d", &idade);//Armazenamento da idade das pessoas que compareceram as sessões.

            //Verificação da variável idade. Caso ela seja menor que 3 ou maior que 100 é feita a releitura.
            do
            {
                if(idade < 3 || idade > 100)
                {
                    printf("\nVocê inseriu \"%d\", esse número é inválido.\n", idade);
                    printf("Lembre-se de que a idade deve ser maior que 3 e menor que 100 anos.\n");
                    printf("\nInsira a idade da %dº pessoa: ", (i + 1));
                    fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
                    scanf("%d", &idade); //releitura da variável.

                    //Conjunto de ifs que determina qual dos contadores será acrescentado de acordo com a idade lida.
                    if(idade >= 3 && idade <= 13)
                    {
                        quantidade_de_criancas++;
                        i++;
                    }
                    else if(idade >= 14 && idade <= 17)
                    {
                        quantidade_de_adolescentes++;
                        i++;
                    }
                    else if(idade >= 18 && idade <= 64)
                    {
                        quantidade_de_adultos++;
                        quantidade_adultos_m++;
                        i++;
                    }
                    else if(idade >= 65 && idade <= 100)
                    {
                        quantidade_de_idosos++;
                        quantidade_adultos_m++;
                        i++;
                    }
                }
                else //Conjunto de ifs que determina qual dos contadores será acrescentado de acordo com a idade lida. Mas dessa vez caso a idade sejá certa logo de primeira.
                {
                    if(idade >= 3 && idade <= 13)
                    {
                        quantidade_de_criancas++;
                        i++;
                    }
                    else if(idade >= 14 && idade <= 17)
                    {
                        quantidade_de_adolescentes++;
                        i++;
                    }
                    else if(idade >= 18 && idade <= 64)
                    {
                        quantidade_de_adultos++;
                        quantidade_adultos_m++;
                        i++;
                    }
                    else if(idade >= 65 && idade <= 100)
                    {
                        quantidade_de_idosos++;
                        quantidade_adultos_m++;
                        i++;
                    }
                }
            }
            while(idade < 3 || idade > 100);
        }
        else if(genero == 'f' || genero == 'F')
        {
            quantidade_feminino++;
            printf("\nPara melhorar a qualidade das estatísticas por favor avalie o filme de 0 a 5 estrelas: ");
            fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
            scanf("%lf", &avaliacao); //Armazenamento da quantidade de pessoas que compareceram as sessões.

            //Verificação da variável avaliacao. Caso ela seja menor que 0 ou maior que 5 é feita a releitura.
            do
            {
                if(avaliacao < 0 || avaliacao > 5)
                {
                    printf("\nVocê inseriu \"%.0lf\", esse número é inválido.\n", avaliacao);
                    printf("Por favor avalie o filme de 0 a 5 estrelas.\n");
                    printf("\nInsira sua avaliação: ");
                    fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
                    scanf("%lf", &avaliacao); //releitura da variável.
                }
            }
            while(avaliacao < 0 || avaliacao > 5);

            avaliacao_total += avaliacao; //Após checar a variável avaliacao ela é somada a um total.
            avaliacao = 0; //Depois de ser somada ela tem o seu valor apagado para uma futura releitura.

            printf("\nInsira a idade da %dº pessoa: ", (i + 1));
            fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
            scanf("%d", &idade);//Armazenamento da idade das pessoas que compareceram as sessões.

            //Verificação da variável idade. Caso ela seja menor que 3 ou maior que 100 é feita a releitura.
            do
            {
                if(idade < 3 || idade > 100)
                {
                    printf("\nVocê inseriu \"%d\", esse número é inválido.\n", idade);
                    printf("Lembre-se de que a idade deve ser maior que 3 e menor que 100 anos.\n");
                    printf("\nInsira a idade da %dº pessoa: ", (i + 1));
                    fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
                    scanf("%d", &idade); //releitura da variável.

                    //Conjunto de ifs que determina qual dos contadores será acrescentado de acordo com a idade lida.
                    if(idade >= 3 && idade <= 13)
                    {
                        quantidade_de_criancas++;
                        i++;
                    }
                    else if(idade >= 14 && idade <= 17)
                    {
                        quantidade_de_adolescentes++;
                        i++;
                    }
                    else if(idade >= 18 && idade <= 64)
                    {
                        quantidade_de_adultos++;
                        quantidade_adultos_f++;
                        i++;
                    }
                    else if(idade >= 65 && idade <= 100)
                    {
                        quantidade_de_idosos++;
                        quantidade_adultos_f++;
                        i++;
                    }
                }
                else //Conjunto de ifs que determina qual dos contadores será acrescentado de acordo com a idade lida. Mas dessa vez caso a idade sejá certa logo de primeira.
                {
                    if(idade >= 3 && idade <= 13)
                    {
                        quantidade_de_criancas++;
                        i++;
                    }
                    else if(idade >= 14 && idade <= 17)
                    {
                        quantidade_de_adolescentes++;
                        i++;
                    }
                    else if(idade >= 18 && idade <= 64)
                    {
                        quantidade_de_adultos++;
                        quantidade_adultos_f++;
                        i++;
                    }
                    else if(idade >= 65 && idade <= 100)
                    {
                        quantidade_de_idosos++;
                        quantidade_adultos_f++;
                        i++;
                    }
                }
            }
            while(idade < 3 || idade > 100);
        }
        else //Caso o gênero seja inválido serão printadas as seguintes informações:
        {
            printf("\nVocê inseriu \"%c\", esse caractere é inválido.\n", genero);
            printf("Lembre-se de usar aspenas os caracteres \"M\" ou \"F\" independe de serem maiúsculos ou minúsculos.\n");
        }
    }
    printf("\nPara melhorar a qualidade das estatísticas por favor insira o preço individual do ingresso para uma única sessão: ");
    fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
    scanf("%lf", &valor_do_ingresso); // armazenamento do valor do inngresso.

    //printfs dos resultados finais.
    system("cls");
    printf("Obrigado por usar nosso aplicativo, aqui estão os seus resultados: \n");
    printf("\nNome do filme: %s", nome_do_filme);
    printf("\nA quantidade de pessoas do sexo masculino que compareceram as sessões é:  %d\n", quantidade_masculino);
    printf("A quantidade de pessoas do sexo feminino que compareceram as sessões é:  %d\n", quantidade_feminino);
    printf("\nSegundo a classificação de idade:\n");
    printf("\n%d crianças compareceram a sessão.\n",quantidade_de_criancas);
    printf("%d adolescentes compareceram a sessão.\n",quantidade_de_adolescentes);
    printf("%d adultos compareceram a sessão.\n",quantidade_de_adultos);
    printf("%d idosos compareceram a sessão.\n",quantidade_de_idosos);
    printf("\nA quantidade total de adultos do sexo masculino é: %d.\n",quantidade_adultos_m);
    printf("A quantidade total de adultos do sexo feminino é: %d.\n",quantidade_adultos_f);

    //Interação com o usuário sobre mais estatísticas das sessões
    printf("\nDeseja saber mais estatisticas sobre as sessões?\n");
    printf("Se sim pressione \"S\".\nSe não pressione \"N\".\n");
    fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
    escolha = getchar(); //função getchar para armazenar a variável escolha.

    //verificação da variável escolha.
    do
    {
        if(escolha == 'S' || escolha == 's')
        {
            printf("\nA média de avaliação do filme foi: %.1lf estrelas.", (avaliacao_total / quantidade_de_pessoas));
            printf("\nA arrecadação total foi: %.2lf R$.", ((valor_do_ingresso * (double)quantidade_de_pessoas) * 2.0));
            break;
        }
        else if(escolha == 'N' || escolha == 'n')
        {
            break;
        }
        else
        {
            printf("Você pressionou \"%c\".\n", escolha);
            printf("Por favor pressione apenas \"S\" ou \"N\".\n");
            fflush(stdin); //função que limpa o buffer do teclado, usada para evitar erros inesperados.
            escolha = getchar(); // releitura da escolha.
        }
    }
    while(escolha != 'S' || escolha != 's' || escolha != 'N' || escolha != 'n');

    return 0;
}

