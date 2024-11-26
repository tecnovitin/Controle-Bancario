#ifndef FUNCOES_H
#define FUNCOES_H

#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>


// Estrutura da Conta bancaria
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
    TipoLista2 movimentacao;
} conta_bancaria;

int opc;

typedef struct TipoItem *TipoApontador;

typedef struct TipoItem
{
    conta_bancaria conteudo;
    TipoApontador proximo;
} TipoItem;

typedef struct TipoLista
{
    TipoApontador Primeiro;
    TipoApontador Ultimo;
    TipoApontador prox;
} TipoLista;
//-----------------------------------------------------------------------------------------------------------||

//Estrutura da movimentação das contas (duplamente encadeado)
 
 typedef struct movimentacao
{
    int sequencial;
    int  codigo_conta;
    char favorecido[50];
    char   dt_movimento[11];
    char   tp_movimentacao[15];
    double vl_movimento;
    double vl_saldo;

} movimentacao;
 
 
 typedef struct TipoExtrato *Apontador;

 typedef struct TipoExtrato 
 {
    Apontador ante;
    movimentacao conteudo;
    Apontador proximo;
} Extrato;




typedef struct TipoLista2{

    Apontador Primeiro;
    Apontador Ultimo;
}TipoLista2;

//--------------------------------------------------------------------------------------------------||

//funções:

void gotoxy();

void tela();

void Tela_Cadastro();

void inicializarDuplamente(TipoLista2 *L2);

void InicializaSimplismente(TipoLista *L);

void inserirNoInicio2(TipoLista2 *L2, movimentacao mv);

void inserirNoMeio2(TipoLista2 *L, movimentacao mv, int opc);

void inserirNoFinal2(TipoLista2 *L, movimentacao mv);


void Tela_Consulta();

void Tela_DebitoCredito();

void Tela_Transferencia();

void Menu_Consulta();

void Menu_Principal();

void Menu_Movimentacao();

void Menu_Contas();

void Cadastrar();

void LimpaTela();

void trocarContas(TipoApontador a, TipoApontador b); 

void opcaoo (int opc);


void FiltraNumero(TipoLista * L, int numero);

void FiltraAlfabetica(TipoLista * L);

void ordenarContasPorBancos(TipoLista* L);

void ordenarContasPorNumero(TipoLista* L);

void FiltraOrdemNumerica(TipoLista *L);

void InserirNoInicio(TipoLista *L , int opcao);

void InserirNoFinal(TipoLista *L , int opcao);

#endif