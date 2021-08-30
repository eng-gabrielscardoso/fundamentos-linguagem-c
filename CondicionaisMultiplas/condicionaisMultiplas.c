#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int a = 10;

    if(a > 5 && a < 15){
        printf("A variável a se encontra entre 5 e 15\n");
    }

    if(a > 5 || a > 15){
        printf("A variável a se encontra no intervalo entre 5 e 15\n");
    }
}