#include <iostream>
using namespace std;

int main ()  {
    int foo[5];
    int i;


    for ( i=4 ; i >= 0 ; i-- ) {
        cout << "Insira o " << i << "º numero : " ;
        cin  >> foo[i];
    }

    for ( i=0 ; i < 5 ; i++ ) {
        cout << "O numero na posição " << i << " é " << foo[i] << endl;
    }

    return 0; 
}