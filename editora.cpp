#include <iostream>
using namespace std;

class Musica {
    public:    
        string  nome;
        string  artista;
        int  anoGravacao;
    
        //constructor
        Musica() {}
        Musica( string  nome, string  artista, int  anoGravacao)
            : nome(nome), artista(artista), anoGravacao(anoGravacao)
        {}
    
};

int main() {;
    Musica *m1 = new Musica("Amish Paradise", "Weird Al", 1996);
    Musica *m2 = new Musica("Sete Mares", "Sétima Legião", 1997);
    Musica *m3 = new Musica("Siga a malta", "Galandum Galundaina", 2015);

    cout << "Musica = " << m1->nome << ", artista = " << m1->artista << ", ano de gravação = " << m1->anoGravacao << endl;
    cout << "Musica = " << m2->nome << ", artista = " << m2->artista << ", ano de gravação = " << m2->anoGravacao << endl;
    cout << "Musica = " << m3->nome << ", artista = " << m3->artista << ", ano de gravação = " << m3->anoGravacao << endl;
    return 0;

}
