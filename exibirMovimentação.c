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
    

for (int linha = 8; linha <= 22; linha++)
{
    


    Apontador aux = movimentacoes->Primeiro;
    
    while (aux != NULL) {
        gotoxy(2,linha);
        printf("%s", aux->conteudo.dt_movimento);
        gotoxy(13,linha);
        printf("%s", aux->conteudo.tp_movimentacao);
        gotoxy(42,linha);
        printf("%.2f", aux->conteudo.vl_movimento);
        gotoxy(57,linha);
        printf("%.2f", aux->conteudo.vl_saldo);
       
        aux = aux->proximo;
 
    }

   }
}
