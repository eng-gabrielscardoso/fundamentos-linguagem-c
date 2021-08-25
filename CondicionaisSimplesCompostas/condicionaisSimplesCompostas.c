#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int a = 5;

    // Condicional simples
    if(a == 5){
        printf("Verdadeiro\n");
    }

    // Condicional composta
    if(a % 2 == 0){
        printf("Par\n");
    } else {
        printf("Ímpar\n");
    }

    // Cadeia de condicionais
    int opcao;
    printf("Opções válidas: 1; 2\n");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Opção selecionada: %d\n", opcao);
    } else if (opcao == 2){
        printf("Opção selecionada: %d\n", opcao);
    } else {
        printf("Opção selecionada não é válida\n");
    }
}