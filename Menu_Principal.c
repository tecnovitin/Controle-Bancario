#include "funcoes.h"

void Menu_Principal() {
    
    int opcao;

    gotoxy(16,10);
    printf("1-Cadastro de Contas.....:");

    gotoxy(16,13);
    printf("2-Movimentacoes Bancarias:");

    gotoxy(16,16);
    printf("3-Sair...................:");

    gotoxy(2,24);
    printf("Opcao...:");

    gotoxy(11,24);
    scanf("%d", &opc);

    switch(opc) {
        case 1:
        LimpaTela();
        Menu_Contas();
        break;
        case 2:
        LimpaTela();
        Menu_Movimentacao();
        break;
        case 3:
        exit(0);
    }
}