/*
AUTOR........: Bruno Kenji 168899-2024
EQUIPE.......: Victor Gabriel 160612-202
...... .......160612-2023- VICTOR GABRIEL;
FUNÇÃO DO COD: TROCAR DE AS CONTAS BANCARIAS.

*/

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