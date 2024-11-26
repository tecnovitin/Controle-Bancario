#include "funcoes.h"

void Remover_Inicio(TipoLista *L){
  
    if (L->Primeiro == NULL) {
        gotoxy(11, 24);
        printf("Lista vazia!");
        getch();
        return;
    }

    TipoApontador p = L->Primeiro;
    L->Primeiro = p->proximo;
    if (L->Primeiro == NULL) L->Ultimo = NULL;{
    free(p);
    gotoxy(11, 24);
    printf("Funcionario removido no inicio!");
    }

    getch();
    gotoxy("11,24");
    printf("                                                  ");

}
