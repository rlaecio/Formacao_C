#include <iostream>
using namespace std;

int main(){
    int numero;
    int x = 0;
    
       cout << "\nInforme um numero inteiro positivo : ";
       cin  >> numero;
       if (numero < 0)
       {
           cout << "\nInforme apenas numeros positivos : ";
           cin >> numero;
       } else {
            for (int i = 0; i < numero + 1; i++)
            {
                cout << "A o quadrado de " << i << " = " << i * i << endl;
            }
                            
       }
        
       return 0; 
    
    
}