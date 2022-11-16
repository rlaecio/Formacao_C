#include <iostream>
#include <locale>

void iniciar(int tabela[][3]);          
char desenho(int bloco);         
void tabuleiro(int tabela[][3]);          
void movimentos(int tabela[][3], int); 
int  contadorinuar(int * tabela[3]);   
int  verificaGanhador(int * tabela[3]);        
int  jogo(int tabela[][3]);           
void placar(int, int &, int &); 

int main() {
    int tabela[3][3];
    int contador=0, jogador_1=0, jogador_2=0, resultado;
    do{
        iniciar(tabela);
        resultado = jogo(tabela);
        tabuleiro(tabela);
        placar(resultado, jogador_1, jogador_2);
        std::cout << std::endl;
        std::cout << "Outra partida?" << std::endl;
        std::cout << "0. Sair" << std::endl;
        std::cout << "1. Jogar de novo" << std::endl;
        std::cin >> contador;
    }while(contador);

    return 0;
}

void iniciar(int tabela[][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            tabela[i][j] = 0;
        }
    }

}

char desenho(int bloco) {
    if(bloco == 0) {
        return ' ';
    } else if(bloco == 1) {
        return 'X';
    } else {
        return 'O';
    }
}

void tabuleiro(int tabela[][3]) {
    std::cout << std::endl;
    for(int linha=0 ; linha<3 ; linha++){
        std::cout << " " << desenho(tabela[linha][0]) << " |";
        std::cout << " " << desenho(tabela[linha][1]) << " |";
        std::cout << " " << desenho(tabela[linha][2]) << std::endl;
        if(linha!=2){
            std::cout << "___ ___ ___" << std::endl << std::endl;
        }
    }
}

void movimentos(int tabela[][3], int jogador_) {
    int linha, coluna, check;
    do{
        std::cout << "Linha: ";
        std::cin  >> linha;
        std::cout << "Coluna: ";
        std::cin  >>  coluna;
        linha--; coluna--;

        check = tabela[linha][coluna] || linha<0 || linha>2 || coluna<0 || coluna>2;
        if(check)
            std::cout << "Essa casa não está vazia ou fora do intervalo 3x3" << std::endl;

    } while(check);

    if(jogador_== 0) {
        tabela[linha][coluna] = 1;
    } else {
        tabela[linha][coluna] = -1;
    }
}

int contadorinuar(int tabela[][3]) {
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            if(tabela[i][j] == 0) {
                return 1;
            }
        }
    }
    return 0;
}

int verificaGanhador(int tabela[][3]) {
    int linha, coluna, soma;

    for(linha = 0 ; linha < 3 ; linha++){
        soma = 0;

        for(coluna = 0 ; coluna < 3 ; coluna++) {
            soma += tabela[linha][coluna];
        }
        if(soma == 3) {
            return 1;
        }
        if(soma == -3) {
            return -1;
        }
    }
    
    for(coluna = 0 ; coluna < 3 ; coluna++){
        soma = 0;

        for(linha = 0 ; linha < 3 ; linha++) {
            soma += tabela[linha][coluna];
        }

        if(soma == 3) {
            return 1;
        }
        if(soma == -3) {
            return -1;
        }
    }

    soma = 0;
    for(linha = 0 ; linha < 3 ; linha++){
        soma += tabela[linha][linha];
    }
    if(soma == 3) {
        return 1;
    }
    if(soma == -3) {
        return -1;
    }

    soma = tabela[0][2]+tabela[1][1]+tabela[2][0];

    if(soma == 3) {
        return 1;
    }
    if(soma == -3) {
        return -1;
    }

    return 0;
}

int jogo(int tabela[][3]) {
    int rodada=0, contador, win;

    do{
        tabuleiro(tabela);
        std::cout << std::endl << "Jogador " << 1 + rodada %2 << std::endl;
        movimentos(tabela, rodada%2);
        rodada++;

        contador = contadorinuar(tabela);
        win  = verificaGanhador(tabela);

    }while(contador && !win);

    if(win == 1){
        std::cout << "Jogador 1 ganhou! " << std::endl;
        return 1;
    }else if(win == -1){
        std::cout << "Jogador 2 ganhou! " << std::endl;
        return 2;
    }else {
        std::cout << "Empatou" << std::endl;
    }
    return 0;
}

void placar(int resultado, int &jogador_1, int &jogador_2) {
    if(resultado == 1) {
        jogador_1++;
    }
    if(resultado == 2) {
        jogador_2++;
    }

    std::cout << std::endl << "Placar: " ;
    std::cout << jogador_1  << " x " << jogador_2 << std::endl;
}

