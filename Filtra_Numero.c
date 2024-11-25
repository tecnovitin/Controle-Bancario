



#include <funcoes.h>


void filtraNumero(TipoLista * L, int numero){

    TipoApontador aux = L ->Primeiro;

    while (aux != NULL){
        if (strcmp(aux->conteudo.numero_conta, numero) == 0){
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
                return;

        }
        aux = aux ->proximo;
        


    }
    gotoxy(12, 24);
    printf("Conta com número %s não encontrada.", &numero);


}