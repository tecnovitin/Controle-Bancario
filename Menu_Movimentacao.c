#include "funcoes.h"

void Menu_Movimentacao(){

    int opcao;

    gotoxy(16,8);
    printf("1-Movimentacao de Debito e Credito");

    gotoxy(16,11);
    printf("2-Transferencia entre Contas Bancarias");

    gotoxy(16,14);
    printf("3-Consulta Movimentacoes Bancarias");

    gotoxy(16,17);
    printf("4-Retornar ao Menu Anterior");

    gotoxy(2,24);
    printf("Opcao...:");
    
    gotoxy(11,24);
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
        LimpaTela();
        Tela_DebitoCredito();
        break;
        case 2:
        LimpaTela();
        Tela_Transferencia();
        case 3:
        LimpaTela();
        Tela_Consulta();
        break;
        case 4:
        LimpaTela();
        Menu_Principal();
    }    

}