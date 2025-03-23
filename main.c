#include <stdio.h>
#include <locale.h>

// MODULOS UTILIZADOS PARA A ELABORAÇÃO DO PROJETO
#include "modulos/ferramentas.h"
#include "modulos/textos.h"


int main(void){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int opcao;

    while (opcao != 0){
        limparTela();
        menuPrincipal();
        printf(NEGRITO"Digite a "CIANO"opção "RESET"desejada: ");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            printf("Adicionar Tarefa\n");
            break;
        case 2:
            printf("Listar Tarefas\n");
            break;
        case 3:
            printf("Remover Tarefa\n");
            break;
        case 4: 
            printf("Editar Tarefa\n");
            break;
        case 0:
            printf("Saindo...\n");
            break;  
        default:
            printf(VERMELHO"Opção inválida!\n"RESET);
            break;
        }
    }

    return 0;
}