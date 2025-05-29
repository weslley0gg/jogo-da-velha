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

    gcc main.c jogo.c util.c -o jogo-da-vellha

## Execução

Após a compilação, execute o programa com:

    ./jogo-da-vellha

## Funcionalidades
- Interface simples via terminal
- Jogadores alternam entre 'X' e 'O'
- Verificação de vitória em linhas, colunas e diagonais
- Tratamento de entrada inválida
- Exibição do tabuleiro a cada jogada
- Empate após 9 jogadas sem vencedor

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
Marília  
Iuri  
Weslei Santana
