#include "funcoes.h"



void Menu_Contas() {
    int opc;
    //TipoLista L;

    gotoxy(16,10);
    printf("1-Cadastrar Contas Bancarias");

    gotoxy(16,11);
    printf("2-Remover Contas Bancarias no Final");

    gotoxy(16,12);
    printf("3-Remover Contas Bancarias no Inicio");

    gotoxy(16,13);
    printf("4-Remover Contas Bancarias na Posicao");

    gotoxy(16,14);
    printf("5-Alteracao de Conta Bancaria");

    gotoxy(16,15);
    printf("6-Consultar Contas Bancarias");

    gotoxy(16,16);
    printf("7-Retornar ao Menu Anterior");
    
    gotoxy(11,24);
    scanf("%d", &opc);

    switch(opc) {
        case 1:
        LimpaTela();
        Tela_Cadastro();
        Cadastrar(&L);
        break;
        case 2:
        Remover_Final(&L);
        getch();
        Menu_Contas();
        break;
        case 3:
        Remover_Inicio(&L);
        Menu_Contas();
        break;
        case 5:
        LimpaTela();
        //Tela_Cadastro();
        alterarConta(&L);
        case 6:
        LimpaTela();
        Menu_Consulta();
        case 7:
        LimpaTela();
        Menu_Principal();
        
    }

    getch();

}