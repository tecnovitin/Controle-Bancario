/*
Auto......:Victor Gabriel 
Data......:15/11/2024
Equipe....:<160612-2023> Victor Gabriel
..........:<           >Bruno Kenji
Objetivo..:Criar um sistema para Gerenciar contas correntes
..........e movimentacao bancaria.
Subfunção.:Inclui no final da lista duplamente encadeada


*/

#include "funcoes.h"

void inserirNoInicio2(TipoLista2 *L2, movimentacao mv) {
    
    Apontador p = (Apontador)malloc(sizeof(Extrato));
   
   
    p->conteudo = mv; 
    p->proximo = L2->Primeiro; 
    p->ante = NULL;     

    
    if (L2->Primeiro != NULL) {
        L2->Primeiro->ante = p;
    } else {
        L2->Ultimo = p; 
    }

    
    L2->Primeiro = p;
}

    
   
    
    
    




    
