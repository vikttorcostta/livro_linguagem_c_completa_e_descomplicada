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
void exercicio_02(){
    int numero;
    scanf("%d", &numero);
    printf("%d", numero);
}

/*EXERC�CIO 003
Escreva um programa que leia um n�mero inteiro e depois o imprima a mensagem, "Valor lido: seguido do valor inteiro.
Use apenas o comando printf();".*/
void exercicio_03(){
    int numero;
    scanf("%d", &numero);
    printf("O valor lido foi: %d", numero);
}

int main()
{
    // conclu�do
    //exercicio_01();

    // conclu�do
    //exercicio_02();

    // conclu�do
    //exercicio_03();

    system("pause");
    return 0;
}
