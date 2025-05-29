// Cabeçalho com as funções da lógica do jogo da velha
#ifndef JOGO_H
#define JOGO_H

void inicializarTabuleiro(char tab[3][3]);   // Preenche o tabuleiro com espaços
void exibirTabuleiro(char tab[3][3]);        // Mostra o tabuleiro
void receberJogada(char tab[3][3], char jogador); // Recebe a jogada
int verificarVitoria(char tab[3][3], char jogador); // Verifica vitória

#endif
