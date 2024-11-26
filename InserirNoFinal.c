#include "funcoes.h"

void InserirNoFinal(TipoLista *L , int opcao) {

    TipoApontador p;

    p = (TipoApontador)malloc(sizeof(TipoItem));

    if (L->Primeiro == NULL) {
            L->Primeiro = p;
            L->Ultimo = p;
    } else {
                L->Ultimo->proximo = p;
                L->Ultimo = p;
            }
}
