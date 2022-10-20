#include <iostream>

int main(){

    int numero_1;
    int numero_2;

    std::cout << "Informe o primeiro numero: ";
    std::cin  >> numero_1;
    std::cout << "Informe o segundo numero: ";
    std::cin  >> numero_2;


    if (numero_1 > 0 && numero_2 > 0)
    {
        std::cout << "Ambos numeros são positivos" << std::endl;
    } else if (numero_1 < 0 && numero_2 < 0)
    {        
        std::cout << "Ambos numeros são negativos" << std::endl;
    } else 
    {
        std::cout << "Ambos numeros são neutros" << std::endl;        
    } 
    
    if ((numero_1 < 0 ^ numero_1 == 0) || (numero_2 < 0 ^ numero_2 == 0)) 
    {
        std::cout << "Os numeros são neutros ou negativos" << std::endl;        
    }
    if (numero_1 >= 0 && numero_1 <= 100)
    {
        std::cout << "O numero " << numero_1 << " está compreendido entre 0 e 100" << std::endl;
    }
    if (numero_2 <= 0 && numero_2 >= -100)
    {
        std::cout << "O numero " << numero_2 << " está compreendido entre 0 e -100" << std::endl;
    }
        
    return 0;
}