#include <iostream>
using namespace std;

int main(){
    int numero;

    std::cout << "Digite um numero : ";
    std::cin >> numero;

    if(numero % 2 == 0) {
        std::cout << "O numero inserido, " << numero << ". é par";
    } else {
        std::cout << "O numero inserido, " << numero << ", é impar";
    }
    
    return 0;
    
}