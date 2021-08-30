#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "");

    srand((unsigned)time(NULL));

    int aleatorio = rand() % 3;
    // Vai retornar valores aleatórios entre 0 e 2

    printf("%d\n", aleatorio);
}