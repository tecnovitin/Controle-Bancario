#include "funcoes.h"

void exibirMovimentacoes(conta_bancaria* conta) {  
    TipoLista2* movimentacoes = &conta->movimentacao;

    if (movimentacoes->Primeiro == NULL) {
        gotoxy(11,24);
        printf("Não há movimentações para esta conta.\n");
        return;
    }
    gotoxy(9,4);
    printf("%d:", conta->codigo_conta);

    if(conta == 0) {
        LimpaTela();       
        Menu_Principal();
        return;
    }
    

    int linha = 8; //exibe A MOVIMENTAÇÕES APARTIR DA LINHA 8
    Apontador aux = movimentacoes->Primeiro;

    //PERCORRE TODAS AS MOVIMENTAÇÕES  DA CONTA EXEIBE
    while (aux != NULL && linha <= 22)
    {

        gotoxy(2,linha);
        printf("%s", aux->conteudo.dt_movimento);
        gotoxy(13,linha);
        printf("%s", aux->conteudo.tp_movimentacao);
        gotoxy(42,linha);
        printf("%.2f", aux->conteudo.vl_movimento);
        gotoxy(57,linha);
        printf("%.2f", aux->conteudo.vl_saldo);
       
        aux = aux->proximo;
        linha ++;
    }

}

