#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

void gotoxy(int x, int y){
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

typedef struct conta
{
    int  codigo_conta;
    char banco[50];
    char agencia[10];
    char numero_conta[20];
    char tipo_conta[20];
    float vl_saldo;
    float vl_limite;
    char status[10];
    ////////////prox ContaBancaria;
} conta_bancaria;

typedef struct movimentacao
{
    int sequencial;
    int    codigo_conta;
    char   dt_movimento[11];
    char   tp_movimentacao[15];
    double vl_movimento;
    double vl_saldo;

} movimentacao;


typedef struct TipoItem *TipoApontador;

typedef struct TipoItem
{
    conta_bancaria conteudo;
    TipoApontador proximo;
} TipoItem;
 
 typedef struct TipoExtrato
{
    TipoApontador ante;
    movimentacao conteudo;
    TipoApontador proximo;
} TipoExtrato;


typedef struct
{
    TipoApontador Primeiro;
    TipoApontador Ultimo;
    TipoApontador prox;
} TipoLista;

void tela() {
    int linha;
    system("cls");

    for (linha = 1; linha < 26; linha++) {
        gotoxy(1, linha);
        printf("|");
        gotoxy(79, linha);
        printf("|");
    }

    gotoxy(1, 0);
    printf("-------------------------------------------------------------------------------");
    gotoxy(2, 3);
    printf("-----------------------------------------------------------------------------");
    gotoxy(2, 23);
    printf("-----------------------------------------------------------------------------");
    gotoxy(1, 25);
    printf("-------------------------------------------------------------------------------");

    gotoxy(3, 1);
    printf("UNICV");
    gotoxy(3, 2);
    printf("Sistema de Gerenciamento Bancario");
    gotoxy(2, 24);
    printf("Mensagem:");
}

