#include "funcoes.h"

void Menu_Consulta(){

    int opc, numero;
    TipoLista L;
    InicializaSimplismente(&L);

    gotoxy(16,8);
    printf("1-Consulta Geral Contas Bancarias");

    gotoxy(16,10);
    printf("2-Consulta Por Codigo Conta Bancaria");

    gotoxy(16,12);
    printf("3-Consulta Por Ordem Codigo Contas Bancarias");

    gotoxy(16,14);
    printf("4-Consulta Por Ordem Alfabetica Contas Bancarias");

    gotoxy(16,16);
    printf("5-Retornar ao Menu Anterior");
    
    gotoxy(11,24);
    scanf("%d", &opc);

    switch(opc) {
        case 1:
            LimpaTela();
            Tela_Cadastro();
            listarfun(&L);
        break;
        case 2:
            LimpaTela();
            Tela_Cadastro();
        
            FiltraNumero(&L, numero);
            break;
        case 3:
            LimpaTela();
            Tela_Cadastro();
            FiltraOrdemNumerica(&L);
            break;
        case 4:
            LimpaTela();
            Tela_Cadastro();
            FiltraAlfabetica(&L);
            break;
        case 5:
            LimpaTela();
            Menu_Contas();
            break;

    }

}