#include "funcoes.h"

void inserirNoInicio(TipoLista *L, conta_bancaria Nconta){
    //creia uma nova conta
TipoApontador p;

    p = (TipoApontador)malloc(sizeof(TipoItem));

    p->conteudo=Nconta;
    p->proximo=NULL;

    if (L->Primeiro == NULL) {
            L->Primeiro = p;
            L->Ultimo = p;
        } else {
            p->proximo = L->Primeiro;
            L->Primeiro = p;
            }
}