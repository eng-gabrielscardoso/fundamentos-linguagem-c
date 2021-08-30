#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int a = 5;
    int b = 10;
    int c = 15;

    if (a > 2){
        printf("%d é maior que 2\n", a);
    }

    if(c >= b){
        printf("%d é maior ou igual a %d\n", c, b);
    }

    if(a <= b || c < b){
        printf("%d é igual ou menor que %d, ou %d é menor que %d\n", a, b, c, b);
    }

    if(a != c){
        printf("%d é diferente de %d\n", a, c);
    }
}