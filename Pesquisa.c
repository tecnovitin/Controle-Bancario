#include "funcoes.h"

void pesquis(TipoLista* L, int codigo) {
// Função de pesquisa que retorna um ponteiro para o nó encontrado ou NULL se não encontrado
    TipoApontador pesquisa(TipoLista* L, int codigo) {
    TipoApontador atual = L->Primeiro; // Acesso ao primeiro nó da lista
    
    while (atual != NULL) {
        if (atual->conteudo.codigo_conta == codigo) {
            return atual; // Retorna o ponteiro para o nó encontrado
        }
        atual = atual->proximo; // Avança para o próximo nó
    }

    return NULL; // Retorna NULL se a conta não for encontrada
}
}
