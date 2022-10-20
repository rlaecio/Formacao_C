#include <iostream>
int main(){

    std::string planeta;
    int n_planeta;
    float peso;


    std::cout << "*** Planetas *** \n\n 1 - Mercúrio\n 2 - Vénus\n 3 - Marte\n 4 - Júpiter\n 5 - Saturno\n 6 - Urano\n 7 - Neptuno\n \n";
    std::cout << "Informe o seu peso na terra: ";
    std::cin  >> peso;
    std::cout << "Para onde deseja viajar?: ";
    std::cin  >> n_planeta;
    
    switch (n_planeta)
    {
    case 1:
        peso  = peso * 0.38;
        planeta = "Mercúrio";
        break;
    case 2:
        peso  = peso * 0.91;
        planeta = "Vénus";
        break;
    case 3:
        peso  = peso * 0.38;
        planeta = "Marte";
        break;
    case 4:
        peso  = peso * 2.34;
        planeta = "Júpiter";
        break;
    case 5:
        peso  = peso * 1.06;
        planeta = "Saturno";
        break;
    case 6:
        peso  = peso * 0.92;
        planeta = "Urano";
        break;
    case 7:
        peso  = peso * 1.19;
        planeta = "Neptuno";
        break;
    default:
        std::cout << "Valor Invalido";
        return -1;
    } 

    std::cout << "Seu pedo em " << planeta << " será " << peso;
    return 0;
}