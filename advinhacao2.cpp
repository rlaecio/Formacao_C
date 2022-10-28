#include <iostream>


int main()
{
    int x = 10;
    int numero1;
    srand (time(NULL));
    int numero2 = rand() % x + 1;
    bool acertou = false;

    std::cout << numero2;
    while (acertou == false)
    {        
        std::cout << "\nInsira um numero de 1 a " << x << " : " << std::endl;
        std::cin  >> numero1;
        if (numero2 == numero1)
        {
            std::cout << "\nParabens voce acertou!";
            acertou = true;
        } else {
            std::cout << "\nVoce errou, tente novamente!";
            acertou = false;
        }
        
    }

    return 0;
}