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
3. Ao **final** de cada partida (vitória ou empate): 
   - Exibe o tabuleiro final e a mensagem de resultado (“Jogador <nome> (X ou O) venceu!” ou “Empate!”). 
   - Aguarda que o usuário pressione **Enter** antes de reiniciar o jogo, garantindo tempo para ler quem ganhou. 
4. Após o usuário pressionar Enter, o jogo **recomeça automaticamente**, iniciando uma nova rodada. 

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
