#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int array[3];

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;

    for(int i = 0; i < 3; i++){
        printf("%d", array[i]);
    }
}