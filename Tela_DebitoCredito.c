#include "funcoes.h"

void Tela_DebitoCredito(){

    gotoxy(10,5);
    printf("Sequencia de Movimentacao.:");

    gotoxy(10,6);
    printf("Codigo da Conta...........:");

    gotoxy(10,7);
    printf("Banco.....................:");

    gotoxy(10,8);
    printf("Agencia...................:");

    gotoxy(10,9);
    printf("Numero da Conta...........:");

    gotoxy(10,10);
    printf("Tipo da Conta.............:");

    gotoxy(10,11);
    printf("Saldo.....................:");

    gotoxy(10,12);
    printf("Limite....................:");

    gotoxy(10,13);
    printf("Total Saldo + Limite......:");

    gotoxy(2,14);
    printf("-----------------------------------------------------------------------------");

    gotoxy(10,15);
    printf("1-Data Movimentacao.......:");

    gotoxy(10,16);
    printf("2-Tipo Movimentacao.......:");

    gotoxy(10,17);
    printf("3-Favorecido..............:");

    gotoxy(10,18);
    printf("4-Valor Movimentacao......:");

    gotoxy(10,19);
    printf("5-Novo Saldo..............:");
}