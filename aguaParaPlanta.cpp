#include <iostream>
using namespace std;


string darAguas(bool, int);

int main() {
    int dias;
    string simNao;
    bool suculenta;

    cout << "Informe o numero de dias : ";
    cin  >> dias;
    cout << "É uma suculenta (S/N)? : ";
    cin  >> simNao;
    
    if (simNao == "s") {
        suculenta = true;
    } else if (simNao == "n") {
        suculenta = false;
    } else {
        cout << "Digite apenas S ou N";
        return -1;
    }
    
    cout << darAguas(suculenta, dias);
    return 0;
}


string darAguas(bool suculenta, int dias) {    
    if (dias < 12)   {
        if (suculenta == 1)  {         
            return "É tempo de regar as plantas"; 
        } else {
            return "Não é uma suculenta";
        }        
    } else if (dias < 0){
         return "Não pode regar as plantas"; 
    } else {
         return "Excessão"; 
    }
    return 0;  
}
