/*--------------------------------------------------------
Disciplina: Programaçao Estruturada e Modular
Prof. Carlos Veríssimo                                    
--------------------------------------------------------
Objetivo do Programa: Tabuleiro de Xaderz: Xeque Pastor(Refatorado)
Data - dd/mm/aaaa
Autor: Júlio César Santana
--------------------------------------------------------*/
#include <stdio.h>
 
// Função para exibir o tabuleiro
void exibirTabuleiro(char tabuleiro[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
 
// Função para mover uma peça
void moverPeca(char tabuleiro[8][8], int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino) {
    tabuleiro[linhaDestino][colunaDestino] = tabuleiro[linhaOrigem][colunaOrigem];
    tabuleiro[linhaOrigem][colunaOrigem] = '.';
}
 
int main() {
    // Inicializa o tabuleiro com as peças na posição inicial
    char tabuleiro[8][8] = {
        {'t', 'c', 'b', 'd', 'r', 'b', 'c', 't'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'T', 'C', 'B', 'D', 'R', 'B', 'C', 'T'}
    };
 
    // Exibe o tabuleiro inicial
    printf("Tabuleiro inicial:\n");
    exibirTabuleiro(tabuleiro);
 
    // Jogada 1: Peão do Rei e2 para e4
    moverPeca(tabuleiro, 6, 4, 4, 4);
    printf("Após jogada #1 das Brancas (Peão do Rei e2 para e4):\n");
    exibirTabuleiro(tabuleiro);
 
    // Jogada 1: Peão do Rei e7 para e5
    moverPeca(tabuleiro, 1, 4, 3, 4);
    printf("Após jogada #1 das Pretas (Peão do Rei e7 para e5):\n");
    exibirTabuleiro(tabuleiro);
 
    // Jogada 2: Bispo do Rei f1 para c4
    moverPeca(tabuleiro, 7, 5, 4, 2);
    printf("Após jogada #2 das Brancas (Bispo do Rei f1 para c4):\n");
    exibirTabuleiro(tabuleiro);
 
    // Jogada 2: Cavalo da Dama b8 para c6
    moverPeca(tabuleiro, 0, 1, 2, 2);
    printf("Após jogada #2 das Pretas (Cavalo da Dama b8 para c6):\n");
    exibirTabuleiro(tabuleiro);
 
    // Jogada 3: Dama d1 para h5
    moverPeca(tabuleiro, 7, 3, 3, 7);
    printf("Após jogada #3 das Brancas (Dama d1 para h5):\n");
    exibirTabuleiro(tabuleiro);
 
    // Jogada 3: Cavalo do Rei g8 para f6
    moverPeca(tabuleiro, 0, 6, 2, 5);
    printf("Após jogada #3 das Pretas (Cavalo do Rei g8 para f6):\n");
    exibirTabuleiro(tabuleiro);
 
    // Jogada 4: Dama h5 captura Peão f7 (Xeque Mate)
    moverPeca(tabuleiro, 3, 7, 1, 5);
    printf("Após jogada #4 das Brancas (Dama h5 captura Peão f7 - Xeque Mate):\n");
    exibirTabuleiro(tabuleiro);
 
    return 0;
}
