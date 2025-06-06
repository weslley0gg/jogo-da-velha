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

    // Loop externo: reinicia automaticamente ao final de cada partida
    while (1) {
        char tabuleiro[3][3];
        char jogadorAtual = 'X';
        int jogadas = 0;

        inicializarTabuleiro(tabuleiro);

        // Loop interno da partida atual
        while (1) {
            limparTela();
            exibirTabuleiro(tabuleiro);

            // Solicita jogada com base no jogador atual
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

                // 1) Limpa o '\n' que ficou no buffer após o último scanf
                int c;
                while ((c = getchar()) != '\n' && c != EOF) { /* descarta */ }

                // 2) Aguarda o usuário pressionar Enter para reiniciar
                printf("\nPressione Enter para iniciar um novo jogo...");
                getchar();

                break;
            }

            // Verifica empate (9 jogadas sem vencedor)
            if (jogadas == 9) {
                limparTela();
                exibirTabuleiro(tabuleiro);
                printf("Empate!\n");

                // 1) Limpa o '\n' que ficou no buffer após o último scanf
                int c;
                while ((c = getchar()) != '\n' && c != EOF) { /* descarta */ }

                // 2) Aguarda o usuário pressionar Enter para reiniciar
                printf("\nPressione Enter para iniciar um novo jogo...");
                getchar();

                break;
            }

            // Alterna entre X e O
            jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
        }
        // --- Fim do loop interno (partida atual)
        // Ao retornar aqui, já pressionaram Enter, então a próxima iteração limpa a tela.
    }

    return 0;
}
