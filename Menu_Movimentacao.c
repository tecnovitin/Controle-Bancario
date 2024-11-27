#include "funcoes.h"


TipoLista L; // Inicialize conforme necessário

void Menu_Movimentacao(conta_bancaria *conta, TipoLista2 *L2, TipoLista *L){ //void Menu_Movimentacao(conta_bancaria *conta, TipoLista2 *L2){
    int opc;

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
    scanf("%d", &opc);

    switch(opc) {
        case 1:
        LimpaTela();
        Tela_DebitoCredito();
        cadastrarmovi(conta, L2, L);
        break;
        case 2:
        LimpaTela();
        Tela_Transferencia();
        Transferencia(L);
        break;
        case 3:
        LimpaTela();
        Tela_Consulta();
        exibirMovimentacoes(conta);
        break;
        case 4:
        LimpaTela();
        Menu_Principal();
    }    

}