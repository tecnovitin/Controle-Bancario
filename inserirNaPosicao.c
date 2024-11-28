


#include "funcoes.h"

void InserirNaPosicao(TipoLista *L, conta_bancaria Nconta, int opc) {
    
     TipoApontador p= NULL;
   // InicializaSimplismente(L);
    if (opc <= 0) {
        gotoxy(11, 24);
        printf("Posição inválida");
        getch();
        return;
    }

    p = (TipoApontador)malloc(sizeof(TipoItem));
    p->conteudo = Nconta;
    p->proximo = NULL;

   
    if (opc == 1) {
        p->proximo = L->Primeiro;
        L->Primeiro = p;
        if (L->Ultimo == NULL) {
            L->Ultimo = p; 
        }
        return;
    }

    TipoApontador aux = L->Primeiro;
    int i = 1;

   
    while (aux != NULL && i < opc - 1) {
        aux = aux->proximo;
        i++;
    }

    if (aux == NULL) {
   
        L->Ultimo->proximo = p;
        L->Ultimo = p;
    } else {
        // Inserção entre dois nós
        p->proximo = aux->proximo;
        aux->proximo = p;
    }

    gotoxy(11, 24);
    printf("Conta inserida na posicao %d", opc);
    getch();
}
