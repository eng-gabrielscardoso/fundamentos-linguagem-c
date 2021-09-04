#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int option;

    while(option < 1 || option > 3){
        printf("\nEscolha uma opção:\n");
        printf("1 - Opção 1\n");
        printf("2 - Opção 2\n");
        printf("3 - Opção 3\n");
        
        printf("R: ");
        scanf("%d", &option);

        switch(option){
            case 1:
                printf("\nOpção selecionada: 1\n");
                break;
            case 2:
                printf("\nOpção selecionada: 2\n");
                break;
            case 3:
                printf("\nOpção selecionada: 3\n");
                break;
            default:
                printf("\nOpção inválida\n");
                break;
        }
    }
}