#include "funcoes.h"

void InserirNoFinal(TipoLista *L , conta_bancaria Nconta) {

    TipoApontador p;

    p = (TipoApontador)malloc(sizeof(TipoItem));

    p->conteudo =Nconta;
    p->proximo=NULL;

    if (L->Primeiro == NULL) {
            L->Primeiro = p;
            L->Ultimo = p;
    } else {
                L->Ultimo->proximo = p;
                L->Ultimo = p;
            }
}
