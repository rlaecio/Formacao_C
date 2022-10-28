#include <iostream>

int main()
{
    int n, aux, temp, ultimo=1, penultimo=0;

    std::cout << "Exibir quantos termos: ";
    std::cin >> n;

    for(aux=0 ; aux < n ; aux++){
        std::cout << (penultimo);
        temp = penultimo;
        penultimo = ultimo;
        ultimo = ultimo + temp;

        if (aux < n-1) {
            std::cout << ", ";
        }
        else {
            std::cout << ". ";
        }        
    }
    return 0;
}