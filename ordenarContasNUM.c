



#include "funcoes.h"



// Função para ordenar as contas em ordem alfabética (Bubble Sort)
void ordenarContasPorNumero(TipoLista* L) {
    if (L->Primeiro == NULL || L->Primeiro->proximo == NULL) {
        // Lista vazia ou com apenas um elemento, não precisa ordenar
        return;
    }

    TipoApontador i, j;
    int trocou;
    
    // Realiza várias passagens pela lista
    do {
        trocou = 0;
        i = L->Primeiro;

        // Percorre a lista comparando pares de nós adjacentes
        while (i != NULL && i->proximo != NULL) {
            j = i->proximo;
            // Compara os bancos das contas em ordem alfabética
            if (strcmp(i->conteudo.numero_conta, j->conteudo.numero_conta) > 0) {
                // Se estiver fora de ordem, troca as contas
                trocarContas(i, j);
                trocou = 1; // Indica que houve troca
            }
            i = i->proximo;
        }
    } while (trocou); // Continua até que não haja mais trocas
}