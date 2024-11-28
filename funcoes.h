#ifndef FUNCOES_H
#define FUNCOES_H

#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>





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

//-----------------------------------------------------------------------------------------------------------||
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
   
} TipoLista;

TipoApontador pesquisa(TipoLista* L, int codigo); ////////////////




//--------------------------------------------------------------------------------------------------||

//funções:

void gotoxy(int x, int y);

void tela();

void Tela_Cadastro();


void InicializaSimplismente(TipoLista *L);

void inicializaDuplamente(TipoLista2 *L2);

void Tela_Consulta();

void Tela_DebitoCredito();

void Tela_Transferencia();

void Menu_Consulta();

void Menu_Principal();

void Menu_Movimentacao(conta_bancaria *conta, TipoLista2 *L2, TipoLista *L);

void Menu_Contas();

void Cadastrar(TipoLista *L);

void LimpaTela();

void trocarContas(TipoApontador a, TipoApontador b); 

void opcaoo (int opc);


void FiltraNumero(TipoLista * L, int numero);

void FiltraAlfabetica(TipoLista * L);

void ordenarContasPorBancos(TipoLista* L);

void ordenarContasPorNumero(TipoLista* L);

void FiltraOrdemNumerica(TipoLista *L);

void inserirNoInicio(TipoLista *L, conta_bancaria Nconta);

void InserirNoFinal(TipoLista *L , conta_bancaria Nconta);

void InserirNaPosicao(TipoLista *L ,conta_bancaria Nconta, int opc);

void exibirMovimentacoes(conta_bancaria* conta);

void cadastrarmovi(conta_bancaria *localconta, TipoLista2 *L2, TipoLista *L); //void casdastrarmovi(conta_bancaria *conta, TipoLista2 *L2)

//void pesquis(TipoLista* L, int codigo);

void alterarConta(TipoLista* L);

void registrarMovimentacao(TipoLista2* L2, movimentacao* mv);

void listarfun(TipoLista *L);

void alterarConta(TipoLista* L);

void Transferencia(TipoLista *L);

void carregarCT(const char *nome_arquivo, TipoLista *contas);

void salvarCT(const char *nome_arquivo, TipoLista *contas);

void limparOpc();

void Remover_Final(TipoLista *L);

void Remover_Inicio(TipoLista *L);

#endif