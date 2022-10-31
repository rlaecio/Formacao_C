#include <iostream>
#include <math.h>

using namespace std;

int incrementar(int);
int soma(int, int);

int main() {

    int input;
    cout << "Insira o numero que pretende: " << endl;
    cin  >> input;
    cout << sqrt(input) << endl;
    cout << incrementar(input) << endl;
}

int incrementar(int numero1){
    return numero1 +1;
}

int soma(int numero1, int numero) {}
