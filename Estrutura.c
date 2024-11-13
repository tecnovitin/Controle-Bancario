// Bruno kenji
// dupla com Victor 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include "funcoes.h"
/*
void gotoxy(int x, int y){
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
*/
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


int main (){
    tela();
    Tela_Cadastro();


return 0;
}