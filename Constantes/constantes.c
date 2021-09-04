#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14159

void main(){
    setlocale(LC_ALL, "");

    printf("Valor de Pi: %f\n", PI);
    
    // Também pode ser criada com a palavra reservada const
    const float PHI = 1.618;
    
    printf("Valor de Phi: %f\n", PHI);
}