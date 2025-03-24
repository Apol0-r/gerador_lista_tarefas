#include <stdio.h>
#include <locale.h>

// MODULOS UTILIZADOS PARA A ELABORAÇÃO DO PROJETO
#include "modulos/ferramentas.h"
#include "modulos/textos.h"

#include "modulos/manipulacao_dados/procedimentos.h"
#include "modulos/manipulacao_dados/procedimentos.c"


int main(void){
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    do{
        limparTela();
        menuPrincipal();
        printf(NEGRITO"Digite a "CIANO"opção "RESET"desejada: ");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            adicionarTarefa();
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
        respiro();

        
    }while (opcao != 0);

    return 0;
}