#include <stdio.h>
#include <string.h>
#include "jogo.h"
#include "util.h"

int main() {
    char nomeX[50], nomeO[50];

    // 1) Pergunta o nome dos jogadores antes de começar a(s) partida(s)
    printf("Digite o nome do jogador X: ");
    fgets(nomeX, sizeof(nomeX), stdin);
    nomeX[strcspn(nomeX, "\n")] = '\0';  // remove '\n' que o fgets captura

    printf("Digite o nome do jogador O: ");
    fgets(nomeO, sizeof(nomeO), stdin);
    nomeO[strcspn(nomeO, "\n")] = '\0';

    // --- Loop externo:
    // Toda vez que o jogo terminar (vitória ou empate), ele reinicia automaticamente.
    while (1) {
        char tabuleiro[3][3];
        char jogadorAtual = 'X';
        int jogadas = 0;

        inicializarTabuleiro(tabuleiro);

        // --- Início do loop interno da partida atual
        while (1) {
            limparTela();
            exibirTabuleiro(tabuleiro);

            // Chama receberJogada passando o nome correto conforme jogador Atual
            if (jogadorAtual == 'X') {
                receberJogada(tabuleiro, jogadorAtual, nomeX);
            } else {
                receberJogada(tabuleiro, jogadorAtual, nomeO);
            }
            jogadas++;

            // Verifica vitória
            if (verificarVitoria(tabuleiro, jogadorAtual)) {
                limparTela();
                exibirTabuleiro(tabuleiro);
                if (jogadorAtual == 'X') {
                    printf("Jogador %s (X) venceu!\n", nomeX);
                } else {
                    printf("Jogador %s (O) venceu!\n", nomeO);
                }
                break;
            }

            // Verifica empate (9 jogadas sem vencedor)
            if (jogadas == 9) {
                limparTela();
                exibirTabuleiro(tabuleiro);
                printf("Empate!\n");
                break;
            }

            // Alterna entre X e O
            jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
        }
        // --- Fim do loop interno (partida atual)

        // Após o término (vitória ou empate), reinicia automaticamente:
        printf("\nIniciando novo jogo...\n");
        printf("Pressione Enter para continuar...");
        // Aguarda o usuário pressionar Enter antes de reiniciar a partida
        getchar();  // consome o '\n' remanescente ou espera novo enter

        // OBS.: o while(1) externo mantém tudo reiniciando indefinidamente.
    }

    return 0;
}
