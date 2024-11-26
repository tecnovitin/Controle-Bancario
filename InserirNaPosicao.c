/*#include "funcoes.h"

void InserirNaPosicao(TipoLista *L, int posicao, int valor) {
    TipoApontador p, novo;

    // Aloca memória para o novo item
    novo = (TipoApontador)malloc(sizeof(TipoItem));
    novo->valor = valor;

    if (posicao == 0) {
        novo->proximo = L->Primeiro;
        L->Primeiro = novo;
        if (L->Ultimo == NULL) { 
            L->Ultimo = novo;
        }
        return;
    }

    p = L->Primeiro;
    int i = 0;

    while (p != NULL && i < posicao - 1) {
        p = p->proximo;
        i++;
    }

    if (p != NULL) {
        novo->proximo = p->proximo;
        p->proximo = novo;

        // Se estamos inserindo no final, atualiza o último
        if (novo->proximo == NULL) {
            L->Ultimo = novo;
        }
    } else {
        // Posição inválida (maior que o tamanho da lista)
        free(novo); // Libera a memória do novo item
        printf("Posição inválida!\n");
    }
}
*/
