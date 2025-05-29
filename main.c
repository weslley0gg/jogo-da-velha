#include <stdio.h>
#include "jogo.h"
#include "util.h"

int main() {
    char tabuleiro[3][3];
    char jogadorAtual = 'X';
    int jogadas = 0;

    inicializarTabuleiro(tabuleiro);

    while (1) {
        exibirTabuleiro(tabuleiro);
        receberJogada(tabuleiro, jogadorAtual);
        jogadas++;

        if (verificarVitoria(tabuleiro, jogadorAtual)) {
            exibirTabuleiro(tabuleiro);
            printf("Jogador %c venceu!\n", jogadorAtual);
            break;
        }

        if (jogadas == 9) {
            exibirTabuleiro(tabuleiro);
            printf("Empate!\n");
            break;
        }

        jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
    }

    return 0;
}
