



#include "funcoes.h"



 
void ordenarContasPorBancos(TipoLista* L) {
    if (L->Primeiro == NULL || L->Primeiro->proximo == NULL) {
        
        return;
    }

    TipoApontador i, j;
    int trocou;
    
    
    do {
        trocou = 0;
        i = L->Primeiro;

        
        while (i != NULL && i->proximo != NULL) {
            j = i->proximo;
            
            if (strcmp(i->conteudo.banco, j->conteudo.banco) > 0) {
                
                trocarContas(i, j);
                trocou = 1; 
            }
            i = i->proximo;
        }
    } while (trocou); // Continua até que não haja mais trocas
}