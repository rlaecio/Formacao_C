#include <iostream>
using namespace std;

int main() {
    int opcao1;
    int opcao2;
    string nome1;
    string nome2;


    cout << "* * *  PEDRA, PAPEL, TESOURA  * * *  " << endl;
    
    cout << endl << "JOGADOR 1  ";
    cout << endl << "Informe seu nome : ";
    cin  >> nome1;
    cout << endl << "1.PEDRA \n2.PAPEL \n3.TESOURA" << endl;
    cout << "? ";
    cin  >> opcao1;
   
    cout << endl << "JOGADOR 2  " ;
    cout << endl << "Informe seu nome : ";
    cin  >> nome2;
    cout << endl << "1.PEDRA \n2.PAPEL \n3.TESOURA" << endl;
    cout << "? ";
    cin  >> opcao2;
    cout << endl;


    switch (opcao1) 
	{
		case 1:
			cout << nome1 << " escolheu PEDRA"  << endl;
		    break;
		case 2:
			cout << nome1 << " escolheu PAPEL"  << endl;
		    break;
		case 3:
			cout << nome1 << " escolheu TESOURA" << endl ;
		    break;
		
		default:
			break;
	}

    switch (opcao2) 
	{
		case 1:
			cout << nome2 << " escolheu PEDRA"  << endl;
		    break;
		case 2:
			cout << nome2 << " escolheu PAPEL"  << endl;
		    break;
		case 3:
			cout << nome2 << " escolheu TESOURA" << endl ;
		    break;
		
		default:
			break;
	}

    if ( opcao1 ==  opcao2 ) 
	{
		cout << endl << " Houve empate" << endl ;
	}
	else if (( opcao1 == 1 &&  opcao2 == 3)  || (  opcao1 == 2 &&  opcao2 == 1)  ||  ( opcao1 == 3 &&  opcao2 == 2) )
	{
		cout << endl << nome1 << " VENCEU!" << endl ;
	}
	else
	{
		cout << endl << nome2 << " VENCEU!" << endl ;
	}

    return 0;

}