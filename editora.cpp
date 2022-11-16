#include <iostream>
#include <vector>

using namespace std;

class Editora {
    private:
        string          nome;
        int             ano;
        vector<string>  cancoes;

    public:
        Editora() {};

        Editora(string novoNome, int novoAno, vector<string> novasCancoes)
            : nome(novoNome), ano(novoAno), cancoes(novasCancoes) {}


        void setNome(string novoNome) {
            this->nome = novoNome;
        }

        string getNome() {
            return this->nome;
        }

        void setAno(int novoAno) {
            this->ano = novoAno;
        }

        int getAno() {
            return this->ano;
        }

        void setCancoes(vector<string> novasCancoes) {
            this->cancoes = novasCancoes;
        }

        vector<string> getCancoes() {
            return this->cancoes;
        }

        void adicionarCancao(string novaCancao) {
            this->cancoes.push_back(novaCancao);
        }

        bool removerCancao(string cancao) {
            int tamanho = this->cancoes.size();

            for (int i = 0; i < tamanho; i++) {
                if (this->cancoes[i] == cancao) {
                    this->cancoes.erase(this->cancoes.begin() + i);
                    return true;
                }
            }

            return false;
        }

        string listaCancoes() {
            int tamanho = this->cancoes.size();
            string cancoesString = "";

            for (int i = 0; i < tamanho; i++) {
                cancoesString += this->cancoes[i] + ", ";
            }

            return cancoesString;
        }

};

int main() {
    string  nomeSony = "Sony";
    int     anoSony = 1950;
    vector<string> listaCancoes = { "Sete Mares", "Amish Paradise", "Siga a malta" };

    Editora sony(nomeSony, anoSony, listaCancoes);

    

    sony.setAno(1902);

    cout << "Sony: " << sony.getAno() << endl;

    bool removeuCancao = sony.removerCancao("Sete Mares");
    
    if (removeuCancao) {
        cout << "Removeu a canção: " << "Sete Mares" << endl;
    } else {
        cout << "A canção: " << "Sete Mares" << " Não está na lista de cancões da editora:";
        cout << sony.getNome() << endl;
    }

    cout << "Lista de canções da editora: " << sony.getNome() << endl;
    cout << sony.listaCancoes() << endl;

}