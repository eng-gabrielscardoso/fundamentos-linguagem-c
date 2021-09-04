#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int a = 0;

    do{
        printf("%d\n", a);
        a++;
    } while (a <= 10);

    int b = 10;

    do{
        printf("%d\n", b);
        b--;
    } while (b >= 0);
}