

#include "funcoes.h"

void inserirNoInicio(TipoLista *L, conta_bancaria Nconta){
    TipoApontador p= NULL;
    InicializaSimplismente(L);


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
        printf("Cadastrado com sucesso"); 
        getch();
}