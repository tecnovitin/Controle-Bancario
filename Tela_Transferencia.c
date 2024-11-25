#include "funcoes.h"

void Tela_Transferencia() {


    gotoxy(2,5);
    printf("-------C O N T A  O R I G E M --------+-------C O N T A  D E S T I N O-------");

    gotoxy(3,6);
    printf("Conta de Origem.:");

    gotoxy(3,7);
    printf("Banco...........:");

    gotoxy(3,8);
    printf("Agencia.........:");

    gotoxy(3,9);
    printf("Numero da Conta.:");

    gotoxy(3,10);
    printf("Tipo da Conta...:");

    gotoxy(3,11);
    printf("Saldo...........:");

    gotoxy(3,12);
    printf("Limite..........:");

    gotoxy(3,13);
    printf("Saldo + Limite..:");

    gotoxy(3,14);
    printf("Novo Saldo......:");

    gotoxy(2,15);
    printf("--------------------------------------+--------------------------------------");


    gotoxy(19,16);
    printf("Valor a Ser transferido.:");

    gotoxy(19,17);
    printf("Data da Transferencia...:");

    gotoxy(40,6);
    printf("| Conta de Destino:");

    gotoxy(40,7);
    printf("| Banco...........:");

    gotoxy(40,8);
    printf("| Agencia.........:");

    gotoxy(40,9);
    printf("| Numero da Conta.:");

    gotoxy(40,10);
    printf("| Tipo da Conta...:");

    gotoxy(40,11);
    printf("| Saldo...........:");

    gotoxy(40,12);
    printf("| Limite..........:");

    gotoxy(40,13);
    printf("| Saldo + Limite..:");

    gotoxy(40,14);
    printf("| Novo Saldo......:");

    getch();

}