




#include<funcoes.h>

void trocarContas(TipoApontador a, TipoApontador b) {
    conta_bancaria temp = a->conteudo;
    a->conteudo = b->conteudo;
    b->conteudo = temp;
}