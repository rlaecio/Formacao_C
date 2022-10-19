#include <iostream>
 
 int main(){

    int numero;

    std::cout << "Digite um valor na escala MoHs (1 a 10): ";
    std::cin >> numero;

    if(numero == 1) {
        std::cout << numero << " - Talco";
    } else if (numero ==  2){
        std::cout << numero << " - Gesso";    
    } else if (numero ==  3){
        std::cout << numero << " - Calcite";    
    } else if (numero ==  4){
        std::cout << numero << " - Fluorite";    
    } else if (numero ==  5){
        std::cout << numero << " - Apatite";    
    } else if (numero ==  6){
        std::cout << numero << " - Feldspato";    
    } else if (numero ==  7){
        std::cout << numero << " - Quartzo";    
    } else if (numero ==  8){
        std::cout << numero << " - Topázio";    
    } else if (numero ==  9){
        std::cout << numero << " - Corindo";    
    } else if (numero ==  10){
        std::cout << numero << " - Diamante";  
    } else {
        std::cout << numero << " - Valor não válido";  
    }
    
    
    return 0;
 }