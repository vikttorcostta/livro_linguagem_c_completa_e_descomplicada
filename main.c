#include <stdio.h>
#include <stdlib.h>

/**
EXERCÍCIO 001
Elabore um programa que escreva as mensagens "Início do programa" e "Fim do programa" na tela,
uma em cada linha, usando apenas um comando print().
**/
void exercicio_01(){
    printf("Início do programa\n");
    printf("Fim do programa\n");
}

void exercicio_02(){
    int numero;
    scanf("%d", &numero);
    printf("%d", numero);
}

int main()
{
    // concluído
    //exercicio_01();

    //
    exercicio_02();

    system("pause");
    return 0;
}
