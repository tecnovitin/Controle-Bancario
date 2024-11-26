#include "funcoes.h"

void registrarMovimentacao(TipoLista2* L2, movimentacao* mv) {
    inicializaDuplamente(L2);
    
    Apontador novaMov = (Apontador)malloc(sizeof(Extrato));
    if (novaMov == NULL) {
        gotoxy(11,24 );
        printf("Erro ao alocar memória para a movimentação.\n");
        return;
    }

    // Copia os dados da movimentação para o novo nó
    novaMov->conteudo = *mv;
    novaMov->proximo = NULL;
    novaMov->ante = NULL;

    // Caso a lista esteja vazia
    if (L2->Primeiro == NULL) {
        L2->Primeiro = novaMov; // O novo nó será o primeiro
        L2->Ultimo = novaMov;   // E também o último
    } else {
        // Adiciona o novo nó ao final da lista
        novaMov->ante = L2->Ultimo;        // O novo nó aponta para o último atual
        L2->Ultimo->proximo = novaMov;    // O último atual aponta para o novo nó
        L2->Ultimo = novaMov;             // Atualiza o ponteiro para o último nó
    }
}

