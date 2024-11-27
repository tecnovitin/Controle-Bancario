
#include "funcoes.h"

void salvarCT(const char *nome_arquivo, TipoLista *contas) {
    FILE *arquivo = fopen(nome_arquivo, "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    // Contador de contas
    int quantidade = 0;
    TipoApontador aux = contas->Primeiro;
    while (aux != NULL) {
        quantidade++;
        aux = aux->proximo;
    }

    // Grava a quantidade de contas
    fwrite(&quantidade, sizeof(int), 1, arquivo);

    // Grava cada conta e suas transações
    aux = contas->Primeiro;
    while (aux != NULL) {
        // Salva a conta
        fwrite(&(aux->conteudo), sizeof(conta_bancaria), 1, arquivo);

        // Salva as transações da conta
        Extrato *movAux = aux->conteudo.movimentacao.Primeiro;
        int quantidadeMov = 0;

        // Conta o número de transações
        while (movAux != NULL) {
            quantidadeMov++;
            movAux = movAux->proximo;
        }

        // Grava a quantidade de transações
        fwrite(&quantidadeMov, sizeof(int), 1, arquivo);

        // Grava os dados das transações
        movAux = aux->conteudo.movimentacao.Primeiro;
        while (movAux != NULL) {
            fwrite(&(movAux->conteudo), sizeof(movimentacao), 1, arquivo);
            movAux = movAux->proximo;
        }

        aux = aux->proximo;
    }

    fclose(arquivo);
    printf("Contas e transações salvas com sucesso em %s.\n", nome_arquivo);
}
