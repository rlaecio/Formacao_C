#include <iostream>
using namespace std;

int main ()  {
    int numero[5], i;


    for ( i=0 ; i < 5 ; i++ ) {
        cout << "Insira o " << i + 1 << "º numero : " ;
        cin  >> numero[i];
    }

    cout << endl;

    for ( i=0 ; i < 5 ; i++ ) {
        cout << "O numero " <<  numero[i]  << " multiplicado por " << i << " = " << numero[i] * i << endl;
    }

    return 0; 
}