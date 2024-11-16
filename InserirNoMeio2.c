/*
Auto......:Victor Gabriel 
Data......:15/11/2024
Equipe....:<160612-2023> Victor Gabriel
..........:<           >Bruno Kenji
Objetivo..:Criar um sistema para Gerenciar contas correntes
..........e movimentacao bancaria.
Subfunção.:Inclui no meio da lista duplamente encadeada


*/

#include "funcoes.h"

void inserirNoMeio2(TipoLista2 *L2, movimentacao mv, int opc){
     Apontador p; 
     int t = 0;

    Apontador v = L2->Primeiro;
       while(p != NULL){
        p = p->proximo;
        t++;
    }

    p =(Apontador)malloc(sizeof(Extrato));

      for(int i = 0; i< opc - 1; i++){
        v=v->proximo;
      }
    
    p->conteudo=mv;
    p->proximo=v->proximo;
    p->ante = v;

    if (v->proximo != NULL){
        v->proximo->ante=p;
    }
  v->proximo = p;
    
}