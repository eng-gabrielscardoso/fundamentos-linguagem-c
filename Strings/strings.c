#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    char palavra[255];

    printf("Digite uma palavra: ");

    setbuf(stdin, 0);

    fgets(palavra, 255, stdin);

    palavra[strlen(palavra) - 1] = '\0';

    printf("%s\n", palavra);
}