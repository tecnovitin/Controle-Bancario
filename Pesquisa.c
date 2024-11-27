/*
AUTOR........: Bruno Kenji 168899-2024
EQUIPE.......: Victor Gabriel 160612-202
...... .......160612-2023- VICTOR GABRIEL;
FUNÇÃO DO COD: TROCAR DE AS CONTAS BANCARIAS.

*/

#include "funcoes.h"

void pesquis(TipoLista* L, int codigo) {

    TipoApontador pesquisa(TipoLista* L, int codigo) {
    TipoApontador atual = L->Primeiro; 
    
    while (atual != NULL) {
        if (atual->conteudo.codigo_conta == codigo) {
            return atual; 
        }
        atual = atual->proximo; 
    }

    return NULL; // Retorna NULL se a conta não for encontrada
}
}
