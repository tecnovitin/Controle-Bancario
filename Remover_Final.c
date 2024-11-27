/*
AUTOR........: Bruno Kenji 168899-2024
EQUIPE.......: Victor Gabriel 160612-202
...... .......160612-2023- VICTOR GABRIEL;
FUNÇÃO DO COD: TROCAR DE AS CONTAS BANCARIAS.

*/

#include "funcoes.h"

void Remover_Final(TipoLista *L) {
    if (L->Primeiro == NULL) {
        gotoxy(11, 24);
        printf("Lista vazia!");
        getch();
        return;
    }

    TipoApontador p = L->Primeiro;
    if (L->Primeiro == L->Ultimo) {
        L->Primeiro = NULL;
        L->Ultimo = NULL;
    } else {
        TipoApontador penultimo = NULL;
        while (p->proximo != NULL) {
            penultimo = p;
            p = p->proximo;
        }
        penultimo->proximo = NULL;
        L->Ultimo = penultimo;
    }
    free(p);
    gotoxy(11, 24);
    printf("Funcionario removido no final!");
    getch();

}

