#include "funcoes.h"

void Remover_Inicio(TipoLista *L) {
    // Verifica se a lista está vazia
    if (L->Primeiro == NULL) {
        gotoxy(11, 24);
        printf("Lista vazia!");  // Mensagem para lista vazia
        getch();
        gotoxy(11, 24);
        printf("                                                  ");  // Limpa a mensagem
        return;
    }

    // Enquanto houver elementos na lista, remova o primeiro
    while (L->Primeiro != NULL) {
        // Ponteiro auxiliar para o nó a ser removido
        TipoApontador p = L->Primeiro;

        // Atualiza o início da lista para o próximo nó
        L->Primeiro = p->proximo;

        // Se a lista ficou vazia após a remoção, atualiza o último
        if (L->Primeiro == NULL) {
            L->Ultimo = NULL;
        }

        // Libera o nó removido
        free(p);

        // Mensagem de sucesso
        gotoxy(11, 24);
        printf("Elemento removido do inicio!");
        getch();
        gotoxy(11, 24);
        printf("                                                  ");  // Limpa a mensagem
    }

    // Mensagem final quando a lista estiver completamente vazia
    gotoxy(11, 24);
    printf("Lista agora está vazia!");
    getch();
    gotoxy(11, 24);
    printf("                                                  ");  // Limpa a mensagem
}