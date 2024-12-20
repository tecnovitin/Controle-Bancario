/*
AUTOR........: Bruno Kenji 168899-2024
EQUIPE.......: Victor Gabriel 160612-202
...... .......160612-2023- VICTOR GABRIEL;
FUNÇÃO DO COD: TROCAR DE AS CONTAS BANCARIAS.

*/

#include "funcoes.h"

void inserirNoInicio(TipoLista *L, conta_bancaria Nconta) {
    TipoApontador p = NULL;

    // InicializaSimplismente(L); // Não deve ser chamada aqui

    p = (TipoApontador)malloc(sizeof(TipoItem));
    p->conteudo = Nconta;
    p->proximo = NULL;

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