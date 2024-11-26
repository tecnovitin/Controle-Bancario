#include "funcoes.h"

void Cadastrar(){

    conta_bancaria cb;

    gotoxy(26, 5);
    fflush(stdin);
    scanf("%d", &cb.codigo_conta);

    gotoxy(26, 7);
    fflush(stdin);
    fgets(cb.banco, 50, stdin);

    gotoxy(26, 9);
    fflush(stdin);
    fgets(cb.agencia, 10, stdin);

    gotoxy(26, 11);
    fflush(stdin);
    fgets(cb.numero_conta, 20, stdin);

    gotoxy(26, 13);
    fflush(stdin);
    fgets(cb.tipo_conta, 20, stdin);

    gotoxy(26, 15);
    scanf("%f", &cb.vl_saldo);

    gotoxy(26, 17);
    scanf("%f", &cb.vl_limite);
    

}