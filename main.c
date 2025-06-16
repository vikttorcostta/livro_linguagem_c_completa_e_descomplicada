#include <stdio.h>
#include <stdlib.h>



/*EXERCÍCIO 001
Elabore um programa que escreva as mensagens "Início do programa" e "Fim do programa" na tela,
uma em cada linha, usando apenas um comando print().*/

void exercicio_01(){
    printf("Início do programa\n");
    printf("Fim do programa\n");
}

/*EXERCÍCIO 002
Escreva um programa que leia um número inteiro e depois o imprima.*/
void exercicio_02(){
    int numero;
    scanf("%d", &numero);
    printf("%d", numero);
}

/*EXERCÍCIO 003
Escreva um programa que leia um número inteiro e depois o imprima a mensagem, "Valor lido: seguido do valor inteiro.
Use apenas o comando printf();".*/
void exercicio_03(){
    int numero;
    scanf("%d", &numero);
    printf("O valor lido foi: %d", numero);
}

int main()
{
    // concluído
    //exercicio_01();

    // concluído
    //exercicio_02();

    // concluído
    //exercicio_03();

    system("pause");
    return 0;
}
