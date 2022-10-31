#include <iostream>

void iniciar(int tabela[][3]);          
char desenho(int bloco);         
void tabuleiro(int tabela[][3]);          
void movimentos(int tabela[][3], int); 
int  continuar(int * tabela[3]);   
int  verificaGanhador(int * tabela[3]);        
int  jogo(int tabela[][3]);           
void placar(int, int &, int &); 

int main() {
    int tabela[3][3];

    int cont=0, jogador_1=0, jogador_2=0, result;
    do{
        iniciar(tabela);
        result = jogo(tabela);
        tabuleiro(tabela);
        placar(result, jogador_1, jogador_2);
        std::cout << std::endl;
        std::cout << "Outra partida?" << std::endl;
        std::cout << "0. Sair" << std::endl;
        std::cout << "1. Jogar de novo" << std::endl;
        std::cin >> cont;
    }while(cont);

    return 0;
}

void iniciar(int tabela[][3]) {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            tabela[i][j] = 0;

}

char desenho(int bloco) {
    if(bloco == 0)
        return ' ';
    else if(bloco == 1)
        return 'X';
    else
        return 'O';
}

void tabuleiro(int tabela[][3]) {
    std::cout << std::endl;
    for(int row=0 ; row<3 ; row++){
        std::cout << " " << desenho(tabela[row][0]) << " |";
        std::cout << " " << desenho(tabela[row][1]) << " |";
        std::cout << " " << desenho(tabela[row][2]) << std::endl;
        if(row!=2){
            std::cout << "___ ___ ___" << std::endl << std::endl;
        }
    }
}

void movimentos(int tabela[][3], int jogador_) {
    int row, col, check;
    do{
        std::cout << "Linha: ";
        std::cin  >> row;
        std::cout << "Coluna: ";
        std::cin  >>  col;
        row--; col--;

        check = tabela[row][col] || row<0 || row>2 || col<0 || col>2;
        if(check)
            std::cout << "Essa casa não está vazia ou fora do intervalo 3x3" << std::endl;

    } while(check);

    if(jogador_== 0)
        tabela[row][col] = 1;
    else
        tabela[row][col] = -1;
}

int continuar(int tabela[][3]) {
    for(int i = 0 ; i < 3 ; i++)
        for(int j = 0 ; j < 3 ; j++)
            if(tabela[i][j] == 0)
                return 1;
    return 0;
}

int verificaGanhador(int tabela[][3]) {
    int row, col, sum;
    for(row = 0 ; row < 3 ; row++){
        sum = 0;

        for(col = 0 ; col < 3 ; col++)
            sum += tabela[row][col];
        if(sum == 3)
            return 1;
        if(sum == -3)
            return -1;
    }
    
    for(col = 0 ; col < 3 ; col++){
        sum = 0;

        for(row = 0 ; row < 3 ; row++)
            sum += tabela[row][col];

        if(sum == 3)
            return 1;
        if(sum == -3)
            return -1;
    }

    
    sum = 0;
    for(row = 0 ; row < 3 ; row++)
        sum += tabela[row][row];
    if(sum == 3)
        return 1;
    if(sum == -3)
        return -1;

    sum = tabela[0][2]+tabela[1][1]+tabela[2][0];
    if(sum == 3)
        return 1;
    if(sum == -3)
        return -1;

    return 0;
}

int jogo(int tabela[][3]) {
    int turn=0, cont, win;

    do{
        tabuleiro(tabela);
        std::cout << std::endl << "Jogador " << 1+turn%2 << std::endl;
        movimentos(tabela, turn%2);
        turn++;

        cont=continuar(tabela);
        win = verificaGanhador(tabela);
    }while(cont && !win);

    if(win == 1){
        std::cout << "Jogador 1 ganhou! " << std::endl;
        return 1;
    }else if(win == -1){
        std::cout << "Jogador 2 ganhou! " << std::endl;
        return 2;
    }else
        std::cout << "Empatou" << std::endl;
    return 0;
}

void placar(int result, int &jogador_1, int &jogador_2) {
    if(result == 1)
        jogador_1++;
    if(result == 2)
        jogador_2++;

    std::cout << std::endl << "Placar: " ;
    std::cout << jogador_1  << " x " << jogador_2 << std::endl;
}

