#include <iostream>
 
 int main(){

    int numero;

    std::cout << "Digite o valor do pH encontrado : ";
    std::cin >> numero;

    if(numero < 7) 
    {
        std::cout << "O ph : " << numero << " - pH ácido";
    } else if (numero > 7)
    {
        std::cout << "O ph : " << numero << " - pH base";    
    } else 
    {
        std::cout << "O ph : " << numero << " - pH neutro";    
    }
    
    return 0;
 }