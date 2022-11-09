#include <iostream>

int main(){

    long int digitado, num, invertido, digito;  

    std::cout << "Digite numero inteiro: ";
    std::cin  >> digitado;

    num = digitado;
    invertido = 0;  

    while(num != 0){
       digito = num % 10;
       invertido = (invertido * 10) + digito;
       num = num / 10;
    }   

   
    if(digitado == invertido) {
        std::cout << " O numero "<< digitado << " = "  << invertido << std::endl;
        std::cout << " portanto, e Palindroma" << std::endl;
    } else {
        std::cout << " O numero "<< digitado << " != "  << invertido << std::endl;
        std::cout << " portanto, nao e Palindroma " << std::endl;
    }
   
}