#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    // Por padrão pode ser i = índice (index) ou c = contador (counter)

    for(int i = 0; i <= 10; i++){
        printf("%d\n", i);
    }
}