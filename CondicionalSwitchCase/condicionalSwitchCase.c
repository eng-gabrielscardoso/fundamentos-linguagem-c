#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int a = 5;
    char b = 'x'   ;

    if(a == 1){
        printf("Opção escolhida: %d", a);
    } else if (a == 2){
        printf("Opção escolhida: %d", a);
    } else {
        printf("Opção escolhida é inválida!");
    }

    switch(a){
        case 1:
            printf("Opção escolhida: 1");
            break;
        case 2:
            printf("Opção escolhida: 2");
            break;
        default:
            printf("Opção escolhida é inválida!");
            break;
    }
    
    switch(b){
        case 'a':
            printf("Opção escolhida, a");
            break;
        case 'x':
            printf("Opção escolhida, x");
            break;
        default:
            printf("Opção escolhida é inválida!");
            break;
    }
}