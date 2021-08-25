#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    // Em C, tem-se como tipos primitivos o char, int, float, double e void
    // O estranho de se notar é a ausência de um tipo booleano
    // Em verdade se utiliza os valores numéricos inteiros 0 ou 1 para representar a lógica booleana
    // Definição de variáveis, leva-se o tipo seguido identificador e valor
    int a = 5;

    setlocale(LC_ALL, "");
    // Escrita simples
    printf("Olá\n,");
    // Interpolação de inteiro
    printf("%d\n", 1);
    // Combinação de cadeia com inteiro
    printf("O valor de a = %d\n", a);

    // A função a seguir permite o receber uma entrada e armazenar em uma variável ou em um endereço de uma variável já existente
    scanf("%d", &a);
    // Nesse caso, o valor obtido pelo scanner será armazenado no endereço de memória da variaǘel a (por isso utiliza-se "&a" em vez de "a")
    printf("O novo valor de a é %d\n", a);

    float b = 5.5;
    printf("O valor de b é %f\n", b);
    scanf("%f", &b);
    printf("O novo valor de b é %f\n", b);

    // Buffer: trata-se de um espaço de memória temporário utilizado para escrita e leitura de dados, que pode apresentar, por vezes, dados "atrasados" pela falta da presença de uma função de limpeza após o recebimento de um fluxo de dados
    // É como se fosse o cache de um site, para se ter as novas informações que vem a partir de um stream deve-se antes limpar o cache antigo para preencher o recebimento correto das novas informações

    // Nesse caso, faz-se uma limpeza da memória temporária da entrada padrão <stdin>10
    
    char letra = "c";
    printf("O valor de letra é %c\n", letra);
    fflush(stdin);
    scanf("%c", &letra);
    printf("O novo valor de letra é %c\n", letra);
}