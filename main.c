// Arquivo principal do jogo da velha
#include <stdio.h>
#include "jogo.h"
#include "util.h"

int main() {
    char tabuleiro[3][3];     // Matriz que representa o tabuleiro
    char jogadorAtual = 'X';  // Começa com o jogador X
    int jogadas = 0;          // Contador de jogadas

    inicializarTabuleiro(tabuleiro);  // Preenche o tabuleiro com espaços em branco

    while (1) {
        exibirTabuleiro(tabuleiro);            // Mostra o estado atual do tabuleiro
        receberJogada(tabuleiro, jogadorAtual); // Recebe a jogada do jogador atual
        jogadas++;                              

        if (verificarVitoria(tabuleiro, jogadorAtual)) { // Verifica se o jogador venceu
            exibirTabuleiro(tabuleiro);
            printf("Jogador %c venceu!\n", jogadorAtual);
            break;
        }

        if (jogadas == 9) { // Se 9 jogadas foram feitas e ninguém venceu, é empate
            exibirTabuleiro(tabuleiro);
            printf("Empate!\n");
            break;
        }

        // Alterna entre os jogadores X e O
        jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
    }

    return 0;
}
