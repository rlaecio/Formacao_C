#include <iostream>
 
 int main(){

    int mohs;

    std::cout << "Digite um valor na escala MoHs  1 a 10 : ";
    std::cin >> mohs;

    switch (mohs) {
        case 1 :  
            std::cout <<  mohs << " - Talco";
            break;
        case 2 : 
            std::cout <<  mohs << " - Gesso";    
            break;
        case 3 : 
            std::cout <<  mohs << " - Calcite";    
            break;
        case 4 : 
            std::cout <<  mohs << " - Fluorite";    
            break;
        case 5 : 
            std::cout <<  mohs << " - Apatite";    
            break;
        case 6 : 
            std::cout <<  mohs << " - Feldspato";    
            break;
        case 7 : 
            std::cout <<  mohs << " - Quartzo";    
            break;
        case 8 : 
            std::cout <<  mohs << " - Topázio";    
            break;
        case 9 : 
            std::cout <<  mohs << " - Corindo";    
            break;
        case 10 : 
            std::cout <<  mohs << " - Diamante";  
            break;
        default:
            std::cout <<  mohs << " - Valor não válido" << std::endl;  
            break;
    }
     
    return 0;
 }