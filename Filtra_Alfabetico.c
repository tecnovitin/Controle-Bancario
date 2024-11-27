/*
AUTOR........: VICTOR GABRIEL DA SILVA
EQUIPE.......: 168899-2024- BRUNO KENJI;
...... .......160612-2023- VICTOR GABRIEL;
FUNÇÃO DO COD: FILTRA AS CONTAS BANCARIAS POR ORDEM ALFABETICA.

*/



#include "funcoes.h"

void FiltraAlfabetica(TipoLista * L){

        ordenarContasPorBancos(L);


    TipoApontador aux = L ->Primeiro;

    if (aux==NULL)
    {
        gotoxy(12, 24);
        printf("A lista está vazia.");
        Menu_Consulta();
    }
    while (aux != NULL)
    {
          gotoxy(27 ,5);
                printf("%s", aux->conteudo.banco);
                gotoxy(27 ,7);
                printf("%s", aux->conteudo.agencia);
                gotoxy(27 ,9);
                printf("%s", aux->conteudo.numero_conta);
                gotoxy(27 ,11);
                printf("%s", aux->conteudo.tipo_conta);
                gotoxy(27 ,13);
                printf("%.2f", aux->conteudo.vl_limite);
                gotoxy(27 ,15);
                printf("%.2f", aux->conteudo.vl_saldo);
                aux = aux->proximo;

    }
    
    Menu_Consulta();
}