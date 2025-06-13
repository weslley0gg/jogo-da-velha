#include <stdio.h>
#include "jogo.h"
#include "util.h"

// Inicializa o tabuleiro com espa�os em branco
void inicializarTabuleiro(char tab[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tab[i][j] = ' ';
        }
    }
}

// Mostra o tabuleiro no terminal
void exibirTabuleiro(char tab[3][3]) {
    printf("\n");
    printf("   0   1   2\n");
    for (int i = 0; i < 3; i++) {
        printf("%d  ", i);
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tab[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  ---+---+---\n");
    }
    printf("\n");
}

// Recebe a jogada informando o nome do jogador e a marca dele ('X' ou 'O')
void receberJogada(char tab[3][3], char jogador, char nomeJogador[]) {
    int linha, coluna;
    while (1) {
        printf("%s (%c), digite linha e coluna (0-2): ", nomeJogador, jogador);
        scanf("%d %d", &linha, &coluna);
        if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tab[linha][coluna] == ' ') {
            tab[linha][coluna] = jogador;
            break;
        } else {
            printf("Jogada inv�lida. Tente novamente.\n");
        }
    }
}

// Verifica se o jogador venceu o jogo
int verificarVitoria(char tab[3][3], char jogador) {
    for (int i = 0; i < 3; i++) {
        if (tab[i][0] == jogador && tab[i][1] == jogador && tab[i][2] == jogador) return 1;
        if (tab[0][i] == jogador && tab[1][i] == jogador && tab[2][i] == jogador) return 1;
    }
    if (tab[0][0] == jogador && tab[1][1] == jogador && tab[2][2] == jogador) return 1;
    if (tab[0][2] == jogador && tab[1][1] == jogador && tab[2][0] == jogador) return 1;
    return 0;
}
