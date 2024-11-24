#include "funcoes.h"

void Cadastrar(){

    conta_bancaria cb;

    gotoxy(46, 5);
    fflush(stdin);
    scanf("%d", &cb.codigo_conta);

    gotoxy(46, 7);
    fflush(stdin);
    fgets(cb.banco, 50, stdin);

    gotoxy(46, 9);
    fflush(stdin);
    fgets(cb.agencia, 10, stdin);

    gotoxy(46, 11);
    fflush(stdin);
    fgets(cb.numero_conta, 20, stdin);

    gotoxy(46, 13);
    fflush(stdin);
    fgets(cb.tipo_conta, 20, stdin);

    gotoxy(46, 15);
    scanf("%f", &cb.vl_saldo);

    gotoxy(46, 17);
    scanf("%f", &cb.vl_limite);

}