# Jogo da Velha em C

## Descrição
Este projeto implementa o clássico **Jogo da Velha (Tic Tac Toe)** para dois jogadores no terminal, utilizando a linguagem C. O sistema aplica conceitos fundamentais de programação como uso de **vetores e matrizes**, **modularização com arquivos .h/.c**, e **compilação via terminal**.

## Estrutura de Arquivos

projeto/  
├── main.c        // Função principal e controle do jogo  
├── jogo.c        // Lógica do jogo (tabuleiro, jogadas, verificação)  
├── jogo.h        // Cabeçalho com as funções do jogo  
├── util.c        // Funções auxiliares (ex: limpar tela)  
├── util.h        // Cabeçalho das utilidades  
├── README.txt    // Este documento

## Compilação

Use o compilador `gcc` (ou compatível) no terminal para compilar o projeto:

    gcc main.c jogo.c util.c -o jogo-da-velha

## Execução

Após a compilação, execute o programa com:

    ./jogo-da-velha

## Funcionalidades
1. No **início**, solicita o nome dos dois jogadores (um para as peças **X** e outro para as peças **O**). 
2. O tabuleiro é exibido após cada jogada, indicando a vez de cada jogador pelo nome escolhido. 
3. Ao **final** de cada partida (vitória ou empate), exibe o resultado: 
   - Se houver vencedor, mostra "Jogador <nome> (<X ou O>) venceu!" 
   - Se der empate, mostra "Empate!" 
4. Após exibir o resultado, o jogo **recomeça automaticamente**, iniciando uma nova partida. 
   - É solicitada a tecla Enter para que o usuário possa ver o resultado antes de reiniciar. 

## Requisitos Atendidos
✔ Uso de vetor e matriz  
✔ Modularização (.h/.c)  
✔ Mínimo de 5 funções claras  
✔ Compilação e execução via terminal  
✔ Código comentado e organizado

---

Desenvolvido como projeto para a disciplina de **Raciocínio Lógico e Algoritmos** - UNIAENE - Centro Universitário Adventista de Ensino do Nordeste

Equipe:  
Luiz Fernando  
Marília Gabriela  
Iuri  
Weslei Santana
