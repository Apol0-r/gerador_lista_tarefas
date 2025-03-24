#ifndef TEXTOS_H
#define TEXTOS_H

#include <stdio.h>
#include "ferramentas.h"

void menuPrincipal();

//---------------------------------------------------------
// FUNÇÕES

void menuPrincipal(){
    printf("##############################################\n");
    printf("##                                          ##\n");
    printf("##       "AMARELO"Gerador de Lista de Tarefas"RESET"        ##\n");
    printf("##                                          ##\n");
    printf("##############################################\n");
    printf("##                                          ##\n");
    printf("## 1 - "NEGRITO"Adicionar "RESET"Tarefa                     ##\n");
    printf("## 2 - "NEGRITO"Listar "RESET"Tarefas                       ##\n");
    printf("## 3 - "NEGRITO"Remover "RESET"Tarefa                       ##\n");
    printf("## 4 - "NEGRITO"Editar "RESET"Tarefa                        ##\n");
    printf("## "NEGRITO VERMELHO"0 - Sair"RESET"                                 ##\n");
    printf("##                                          ##\n");
    printf("##############################################\n");
}

void menuAdicionar(){
    printf("##############################################\n");
    printf("##                                          ##\n");
    printf("##       "AMARELO"Adicionar Tarefa"RESET"                   ##\n");
    printf("##                                          ##\n");
    printf("##############################################\n");
}


#endif