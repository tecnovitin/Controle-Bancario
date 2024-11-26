#include "funcoes.h"

void InserirNaPosicao(TipoLista *L ,conta_bancaria Nconta, int opcao){
    
    if (opcao <= 0)
    {
        gotoxy();
        printf("Posição invalida");
        getch();
        return;
    }
        TipoApontador p = (TipoApontador)malloc(sizeof(TipoItem));

        p->conteudo=Nconta; 
        p->proximo=NULL;    

        TipoApontador aux = L->Primeiro;
        int i = 1;

        while (aux != NULL && i < opcao - 1)
        {
            aux = aux->proximo;
            i++;
        }
        if (aux==NULL)
        {
            L->Ultimo->proximo=p;
            L->Ultimo=p;
        }
        
        p->proximo = aux->proximo;
        aux->proximo = p;
            
        
        
}