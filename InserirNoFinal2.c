/*
Auto......:Victor Gabriel 
Data......:15/11/2024
Equipe....:<160612-2023> Victor Gabriel
..........:<           >Bruno Kenji
Objetivo..:Criar um sistema para Gerenciar contas correntes
..........e movimentacao bancaria.
Subfunção.:Inclui no final da lista duplamente encadeada


*/

#include<funcoes.h>

void inserirNoFinal2(TipoLista2 *L, movimentacao mv){

    Apontador P = (Apontador)malloc(sizeof(Extrato));

    P->conteudo = mv;
    P->proximo=NULL;
    P->ante=L->Ultimo;

    if(L->Ultimo != NULL){
        L->Ultimo->proximo = P;
    }else{
        L->Primeiro = P;
    }






}

