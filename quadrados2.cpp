#include <iostream>
using namespace std;

int main(){
    int numero;
    int x = 1;
    
       cout << "\nInforme um numero inteiro positivo : ";
       cin  >> numero;
       if (numero < 0)
       {
           cout << "\nInforme apenas numeros positivos : ";
           cin >> numero;
       } else {
            while (x < numero + 1) {
                cout << "A o quadrado de " << x << " = " << x * x << endl;
                x ++;
            }
                            
       }
        
       return 0; 
    
    
}