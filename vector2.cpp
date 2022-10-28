#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> pares, impares;
    int numeroPares, numeroImpares; 
    int input = 1;

    while(input != 0)
    {
        cout << "Insira um numero, ou digite S para sair: " ;
        cin >> input;

        if (input != 0) {
            if (input % 2 == 0){
                pares.push_back(input);           
            } else {
                impares.push_back(input);           
            }
        }
    }

    // get size from peers and odd for the interation
    numeroPares = pares.size();     
    numeroImpares = impares.size();  
    
    // print list of peers numbers
    cout << endl << "Numeros pares : " ;
    for (int i = 0; i < numeroPares; i++) {
        cout << pares[i] ; 
          if (i < numeroPares - 1) {
            cout << ", ";
        } else {
            cout << ". ";
        }               
    }

    // print list of odd numbers
    cout << endl << "Numeros impares : " ;
    for (int i = 0; i < numeroImpares; i++) {
        cout << impares[i] ; 
          if (i < numeroImpares - 1) {
            cout << ", ";
        } else {
            cout << ". ";
        }               
    }
    
    
    return 0;
}