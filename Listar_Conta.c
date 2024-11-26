#include "funcoes.h"

void listarfun(TipoLista *L) {
    TipoApontador p = L->Primeiro;

    if (p == NULL) {
        gotoxy(11, 24);
        printf("Lista vazia!");
        getch();
        return;
    }

    while (p != NULL) {
        
        gotoxy(27, 5);
        printf("%d", p->conteudo.codigo_conta);
        gotoxy(27, 7);
        printf("%s", p->conteudo.banco);
        gotoxy(27, 9);
        printf("%s", p->conteudo.agencia);
        gotoxy(27, 11);
        printf("%s", p->conteudo.numero_conta);
        gotoxy(27, 13);
        printf("%s", p->conteudo.tipo_conta);
        gotoxy(27, 15);
        printf("%s", p->conteudo.vl_saldo);
        gotoxy(27, 17);
        printf("%.2f", p->conteudo.vl_limite);

        gotoxy(11, 24);
        printf("Pressione qualquer tecla para continuar");
        getch();
        p = p->proximo;
    }
}