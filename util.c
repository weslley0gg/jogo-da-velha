// Implementação de funções auxiliares
#include <stdio.h>
#include "util.h"

// Limpa a tela do terminal de forma compatível com Windows e Unix
void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
