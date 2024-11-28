/*
AUTOR........: VICTOR GABRIEL DA SILVA
EQUIPE.......: 168899-2024- BRUNO KENJI;
...... .......160612-2023- VICTOR GABRIEL;
FUNÇÃO DO COD: TROCAR DE AS CONTAS BANCARIAS.

*/

#include "funcoes.h"

void trocarContas(TipoApontador a, TipoApontador b) {
    conta_bancaria temp = a->conteudo;
    a->conteudo = b->conteudo;
    b->conteudo = temp;
}