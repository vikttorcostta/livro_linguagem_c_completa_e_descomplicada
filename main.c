#include <stdio.h>
#include <stdlib.h>

/*EXERC�CIO 001
Elabore um programa que escreva as mensagens "In�cio do programa" e "Fim do programa" na tela,
uma em cada linha, usando apenas um comando print().*/
void exercicio_01(){
    printf("In�cio do programa\n");
    printf("Fim do programa\n");
}

/*EXERC�CIO 002
Escreva um programa que leia um n�mero inteiro e depois o imprima.*/
void exercicio_002(){
    int numero;
    scanf("%d", &numero);
    printf("%d", numero);
}

/*EXERC�CIO 003
Escreva um programa que leia um n�mero inteiro e depois o imprima a mensagem, "Valor lido: seguido do valor inteiro.
Use apenas o comando printf();".*/
void exercicio_003(){
    int numero;
    scanf("%d", &numero);
    printf("O valor lido foi: %d", numero);
}
/*EXERC�CIO 004
Escreva um programa que leia um n�mero inteiro e depois o imprima usando o operador "%f". Veja o que aconteceu.*/
void exercicio_004(){
    int numero;
    scanf("%d", &numero);
    printf("%f", numero);
}

/*EXERC�CIO 005
Fa�a um programa que leia um valor do tipo float e depois o imprima usando o operador "%d". Veja oque aconteceu.*/
void exercicio_005(){
    int numero;
    scanf("%f", &numero);
    printf("%d", numero);
}

/*EXERC�CIO 006
Fa�a um programa que leia um valor do tipo double e depois o imprima na forma de nota��o ci�nt�fica*/
void exercicio_006(){
    int numero;
    scanf("%f", &numero);
    printf("%e", numero);
}


int main()
{

    // conclu�do
    // exercicio_001();

    // conclu�do
    // exercicio_002();

    // conclu�do
    // exercicio_003();

    // conclu�do
    // exercicio_004(); retornou 0.000000

    // conclu�do
    // exercicio_005(); retornou 1102053376

    // conclu�do
    // exercicio_006();

    system("pause");
    return 0;
}
