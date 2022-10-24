#include <iostream>
using namespace std;

int main(){
    float numero_1;
    float numero_2;
    float resultado;
    int opr;
    string operacao;


    cout << "* * * C A L C U L A D O R A  * * *  " << endl;
    cout << endl << "Digite o primeiro numero a ser calculado : ";
    cin  >> numero_1;
    cout << endl << "Digite o segundo numero a ser calculado  : ";
    cin  >> numero_2;
    cout << endl;

    cout << " ------| OPERAÇÕES |----" << endl;
    cout << "   1 - SOMA"           << endl;
    cout << "   2 - SUBTRAÇÃO"      << endl;
    cout << "   3 - MULTIPLICAÇÃO"  << endl;
    cout << "   4 - DIVISÃO"        << endl;
    cout << endl << "Selecione a operação a realizar : ";
    cin >> opr ;

    if (opr < 0)
    {
        cout << endl << "Não existe opções negativas no menu";
        return -1;
    } else if (opr > 4)
    {
        cout << endl << "Selecione apenas 1.Soma, 2.Subtração, 3.Multiplicação ou 4.Divisão";
        return -1;
    }
      
    switch (opr)
    {
    case 1:
        operacao = "soma";
        resultado = numero_1 + numero_2;
        break;
    case 2:
        operacao = "subtração";
        resultado = numero_1 - numero_2;
        break;
    case 3:
        operacao = "multiplicação";
        resultado = numero_1 * numero_2;
        break;
    case 4:
        operacao = "divisao";
        resultado = numero_1 / numero_2;
        break;
    default:
        break;
    }

    cout << "\n A " << operacao << " entre " << numero_1 << " e " << numero_2 << " = " << resultado << endl;

    return 0;

}