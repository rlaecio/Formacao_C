#include <iostream>
using namespace std;

int soma(int, int);
int soma(int, int, int);
int soma(int, int, int, int);
double soma(double, double);

int main(){
    float result;

    result = soma(30, 18);
    cout << "Soma de 2 inteiros " << result << endl;

    result = soma(1.6, 3.5);
    cout << "Soma de 2 doubles  " << result << endl;

    result = soma(10, 20, 30);
    cout << "Soma de 3 inteiros " << result << endl;

    result = soma(20, 30, 40, 50);
    cout << "Soma de 4 inteiros " << result << endl;
}

double soma(double numero1, double numero2) {
    double resultado = numero1 +  numero2;
    return resultado;
}

int soma(int numero1, int numero2) {
    int resultado = numero1 + numero2;
    return resultado;
}
 
int soma(int numero1, int numero2, int numero3) {
    int resultado1 = soma(numero1, numero2);
    int resultado2 = soma(numero3, resultado1);
    return resultado2;    
}

int soma(int numero1, int numero2, int numero3, int numero4) {
    int resultado1 = soma(numero1, numero2, numero3);
    int resultado2 = soma(resultado1, numero4);
    return resultado2;    
}

