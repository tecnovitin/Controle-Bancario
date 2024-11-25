#include "funcoes.h"

void FiltraOrdemNumerica(TipoLista *L){

       ordenarContasPorNumero(L);


    TipoApontador aux = L ->Primeiro;

    if (aux==NULL)
    {
         gotoxy(12, 24);
        printf("A lista está vazia.");
        return;
    }
    while (aux != NULL)
    {
          gotoxy(27 ,5);
                printf("%s", aux->conteudo.banco);
                gotoxy(27 ,7);
                printf("%s", aux->conteudo.agencia);
                gotoxy(27 ,9);
                printf("%s", aux->conteudo.numero_conta);
                gotoxy(27 ,11);
                printf("%s", aux->conteudo.tipo_conta);
                gotoxy(27 ,13);
                printf("%.2f", aux->conteudo.vl_limite);
                gotoxy(27 ,15);
                printf("%.2f", aux->conteudo.vl_saldo);
                aux = aux->proximo;

    }
    

}