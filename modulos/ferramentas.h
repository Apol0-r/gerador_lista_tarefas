#ifndef FERRAMENTAS_H
#define FERRAMENTAS_H

#include <stdlib.h>

#define RESET      "\033[0m"
#define NEGRITO    "\033[1m"
#define VERMELHO   "\033[31m"
#define VERDE      "\033[32m"
#define AMARELO    "\033[33m"
#define AZUL       "\033[34m"
#define CIANO      "\033[36m"
#define BRANCO    "\033[37m"
#define MAGENTA    "\033[35m"

void limparTela();
void respiro();

void limparTela(){
    #if _WIN32
        system("cls");
    #else
        system("clear");
    #endif  
}

void respiro(){
    printf(NEGRITO"Pressione "VERDE"ENTER "RESET"para continuar...");
    getchar();
    getchar();
}


#endif