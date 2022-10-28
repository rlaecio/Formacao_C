#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numero;
    int quantidade, input, tamanho;

    cout << "Insira uma quantidade de numeros : " ;
    cin  >> quantidade;
    cout << endl;


    for (int i = 0; i < quantidade; i++)
    {
        cout << "Insira o " << (i + 1) << "º numero: " ;
        cin >> input;
        numero.push_back(input);
    }

    tamanho = numero.size();
    cout << endl;

    for (int i = 0; i < tamanho; i++)
    {
        cout << (i + 1) << "º Numero: " << numero[i] << endl;        
    }
    
    
    return 0;
}