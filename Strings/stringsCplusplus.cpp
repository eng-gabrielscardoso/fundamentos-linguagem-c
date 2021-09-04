#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
    std::string palavra;

    printf("Digite uma palavra: ");

    std::cin >> palavra;

    std::cout << palavra + "\n";

    cout << "Aprendendo C++\n";

    return 0;
}