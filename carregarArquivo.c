#include "funcoes.h"



void carregarCT(const char *nome_arquivo, TipoLista *contas) {
    FILE *arquivo = fopen(nome_arquivo, "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    inicializarSimplesmente(contas);

    // Lê a quantidade de contas
    int quantidade;
    fread(&quantidade, sizeof(int), 1, arquivo);

    for (int i = 0; i < quantidade; i++) {
        // Cria uma nova conta
        TipoApontador novaConta = (TipoApontador)malloc(sizeof(TipoItem));
        if (novaConta == NULL) {
            printf("Erro ao alocar memória para a conta.\n");
            fclose(arquivo);
            return;
        }

        // Lê os dados da conta
        fread(&(novaConta->conteudo), sizeof(conta_bancaria), 1, arquivo);

        // Inicializa a lista de transações
        inicializarDuplamente(&(novaConta->conteudo.movimentacao));

        // Lê a quantidade de transações
        int quantidadeMov;
        fread(&quantidadeMov, sizeof(int), 1, arquivo);

        for (int j = 0; j < quantidadeMov; j++) {
            // Cria uma nova transação
            Extrato *novaMov = (Extrato *)malloc(sizeof(Extrato));
            if (novaMov == NULL) {
                printf("Erro ao alocar memória para a transação.\n");
                fclose(arquivo);
                return;
            }

            // Lê os dados da transação
            fread(&(novaMov->conteudo), sizeof(movimentacao), 1, arquivo);

            // Insere a transação na lista
            if (novaConta->conteudo.movimentacao.Primeiro == NULL) {
                novaConta->conteudo.movimentacao.Primeiro = novaMov;
                novaConta->conteudo.movimentacao.Ultimo = novaMov;
                novaMov->ante = NULL;
                novaMov->proximo = NULL;
            } else {
                novaMov->ante = novaConta->conteudo.movimentacao.Ultimo;
                novaMov->proximo = NULL;
                novaConta->conteudo.movimentacao.Ultimo->proximo = novaMov;
                novaConta->conteudo.movimentacao.Ultimo = novaMov;
            }
        }

        // Insere a conta na lista de contas
        if (contas->Primeiro == NULL) {
            contas->Primeiro = novaConta;
            contas->Ultimo = novaConta;
            novaConta->proximo = NULL;
        } else {
            contas->Ultimo->proximo = novaConta;
            contas->Ultimo = novaConta;
            novaConta->proximo = NULL;
        }
    }

    fclose(arquivo);
    printf("Contas e transações carregadas com sucesso de %s.\n", nome_arquivo);
}
