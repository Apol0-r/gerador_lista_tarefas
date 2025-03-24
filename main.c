#include <stdio.h>
#include <locale.h>

// MODULOS UTILIZADOS PARA A ELABORA��O DO PROJETO
#include "modulos/ferramentas.h"
#include "modulos/textos.h"


int main(void){
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    do{
        limparTela();
        menuPrincipal();
        printf(NEGRITO"Digite a "CIANO"op��o "RESET"desejada: ");
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
            printf(VERMELHO"Op��o inv�lida!\n"RESET);
            break;
        }

        printf("Pressione ENTER para continuar...");
        getchar();
        getchar();
    }while (opcao != 0);

    return 0;
}