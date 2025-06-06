#ifndef JOGO_H
#define JOGO_H

void inicializarTabuleiro(char tab[3][3]);
void exibirTabuleiro(char tab[3][3]);
// Receber jogada agora leva também o nome do jogador
void receberJogada(char tab[3][3], char jogador, char nomeJogador[]);
int verificarVitoria(char tab[3][3], char jogador);

#endif
