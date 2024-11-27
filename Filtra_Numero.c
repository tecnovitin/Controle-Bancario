/*
AUTOR........: VICTOR GABRIEL DA SILVA
EQUIPE.......: 168899-2024- BRUNO KENJI;
...... .......160612-2023- VICTOR GABRIEL;
FUNÇÃO DO COD: FILTRA A CONTA BANCARIA POR UM NUMERO ESPECIFICO.

*/
#include "funcoes.h"


void FiltraNumero(TipoLista * L, int numero){

    gotoxy(12,24);
    printf("Digite o numero da conta:");
    
    gotoxy(45,24);
    scanf("%d", &numero);
    gotoxy(12,24);
    printf("                                                                         ");

    if(numero == 0) {
        LimpaTela();
        Menu_Principal();
    }

    TipoApontador aux = L ->Primeiro;
    char numero_str[20];
    
    sprintf(numero_str, "%d", numero);

    while (aux != NULL){
        if (strcmp(aux->conteudo.numero_conta, numero_str) == numero){
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
                getch();
                return;

        }
        aux = aux ->proximo;
        


    }
    gotoxy(12, 24);
    printf("Conta com número %s não encontrada.", numero);

    Menu_Consulta();
}