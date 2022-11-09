#include <iostream>
using namespace std;

class Pessoa {
    public:    
        string  nome;
        string  dataDeNAscimento;
        string  NIF;
        string  morada;
        string  email;
        string  telemovel;
        int     idade;
        bool    cartaConducao;
        bool    podeConduzir;
        string  nacionalidade;

        //constructor
        Pessoa() {}

        Pessoa(
            string  nome,
            string  dataDeNAscimento,
            string  NIF,
            string  morada,
            string  email,
            string  telemovel,
            int     idade,
            bool    cartaConducao,
            bool    podeConduzir,
            string  nacionalidade)
            :   nome(nome),
                dataDeNAscimento(dataDeNAscimento),
                NIF(NIF),
                morada(morada),
                email(email),
                telemovel(telemovel),
                idade(idade),
                cartaConducao(cartaConducao),
                podeConduzir(podeConduzir),
                nacionalidade(nacionalidade)
            {}
            
};

int main() {
    Pessoa p1;

    p1.nome             = "Antonio";
    p1.dataDeNAscimento = "2000-01-01";
    p1.NIF              = "10000000";
    p1.morada           = "Rua de cima";
    p1.email            = "antonio@gmail.com";
    p1.telemovel        = "+351 999999999";
    p1.idade            = 22;
    p1.cartaConducao    = false;
    p1.podeConduzir     = false;
    p1.nacionalidade    = "PT";

    Pessoa *p2 = new Pessoa("Roque", "1977-07-13", "10000", "", "","", 45, false, false, "BR");

    cout << p2->nome <<endl;
    cout << p1.nome;
    return 0;

}


