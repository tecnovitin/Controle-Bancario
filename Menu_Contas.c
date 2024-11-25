#include "funcoes.h"

void Menu_Contas() {

    int opcao;

    gotoxy(16,8);
    printf("1-Cadastrar Contas Bancarias no Final");

    gotoxy(16,9);
    printf("2-Cadastrar Contas Bancarias no Inicio");

    gotoxy(16,10);
    printf("3-Cadastrar Contas Bancarias na Posicao");

    gotoxy(16,11);
    printf("4-Remover Contas Bancarias no Final");

    gotoxy(16,12);
    printf("5-Remover Contas Bancarias no Inicio");

    gotoxy(16,13);
    printf("6-Remover Contas Bancarias na Posicao");

    gotoxy(16,14);
    printf("7-Alteracao de Conta Bancaria");

    gotoxy(16,15);
    printf("8-Consultar Contas Bancarias");

    gotoxy(16,16);
    printf("9-Retornar ao Menu Anterior");
    
    gotoxy(11,24);
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
        LimpaTela();
        Tela_Cadastro();
        break;
        case 2:
        LimpaTela();
        Tela_Cadastro();
        break;
        case 3:
        LimpaTela();
        Tela_Cadastro();
        break;
        case 9:
        LimpaTela();
        Menu_Principal();
        
    }

    getch();

}