#include "funcoes.h"

TipoApontador pesquisa(TipoLista* L, int codigo) {
    TipoApontador atual = L->Primeiro; // Acesso ao primeiro nó da lista
    
    while (atual != NULL) {
        if (atual->conteudo.codigo_conta == codigo) {
            return atual; // Retorna o ponteiro para o nó encontrado
        }
        atual = atual->proximo; // Avança para o próximo nó
    }

    return NULL; // Retorna NULL se a conta não for encontrada
}


void alterarConta(TipoLista* L) {
    conta_bancaria con; // Declaração da variável de tipo conta_bancaria
    TipoApontador aux;  // Ponteiro para percorrer a lista
    int res, cam, status;

    do {
        system("cls");
        // tela(); // Exibe a interface inicial (presumivelmente definida em outro lugar)

        // Loop para localizar a conta pelo código
        do {
            printf("Digite um Codigo: ");
            scanf("%d", &con.codigo_conta);

            // Pesquisa a conta pelo código
            aux = pesquisa(L, con.codigo_conta); // Chamada correta
            if (aux == NULL) {
                printf("Conta nao encontrada.\n");
                getchar(); // Aguarda entrada para limpar a mensagem
            }
        } while (aux == NULL);

        // Exibe os dados da conta
        printf("1 - Codigo: %d\n", aux->conteudo.codigo_conta);
        printf("2 - Banco: %s\n", aux->conteudo.banco);
        printf("3 - Agencia: %s\n", aux->conteudo.agencia);
        printf("4 - Numero da Conta: %s\n", aux->conteudo.numero_conta);
        printf("5 - Tipo da Conta: %s\n", aux->conteudo.tipo_conta);
        printf("6 - Valor do Saldo: %.2f\n", aux->conteudo.vl_saldo);
        printf("7 - Valor do Limite: %.2f\n", aux->conteudo.vl_limite);
        printf("8 - Status: %s\n", aux->conteudo.status);

        // Pergunta se deseja alterar os dados
        printf("Deseja alterar 1-Sim / 2-Nao: ");
        scanf("%d", &res);

        if (res == 1) {
            // Loop para selecionar e alterar um campo
            do {
                printf("Digite o campo para alterar (2 ao 4, 7, 8): ");
                scanf("%d", &cam);

                switch (cam) {
                case 2: // Alterar banco
                    printf("Novo Banco: ");
                    scanf(" %49s", aux->conteudo.banco);
                    break;
                case 3: // Alterar agência
                    printf("Nova Agencia: ");
                    scanf(" %9s", aux->conteudo.agencia);
                    break;
                case 4: // Alterar número da conta
                    gotoxy(26, 13);
                    printf("                          ");
                    gotoxy(26, 13);
                    printf("Novo Numero: ");
                    scanf(" %19s", aux->conteudo.numero_conta);
                    break;
                case 7: // Alterar limite
                    gotoxy(29, 19);
                    printf("                          ");
                    gotoxy(29, 19);
                    printf("Novo Limite: ");
                    scanf("%f", &aux->conteudo.vl_limite);
                    break;
                case 8: // Alterar status
                    gotoxy(37, 21);
                    printf("                          ");
                    gotoxy(37, 21);
                    printf("Novo Status (1-Ativa / 2-Inativa): ");
                    scanf("%d", &status);
                    if (status == 1) {
                        strcpy(aux->conteudo.status, "Ativa");
                    } else if (status == 2) {
                        strcpy(aux->conteudo.status, "Inativa");
                    } else {
                        printf("Opcao invalida!");
                        getch();
                    }
                    break;
                default:
                    gotoxy(2, 23);
                    printf("Campo invalido! Tente novamente.");
                    getch();
                }
            } while (cam < 2 || cam > 4 && cam != 7 && cam != 8);

            // Confirma a alteração
            gotoxy(2, 23);
            printf("Confirmar alteracao 1-Sim / 2-Nao: ");
            scanf("%d", &res);

            if (res == 1) {
                gotoxy(2, 23);
                printf("Alteracao realizada com sucesso!");
                getch();
            }
        }

        // Pergunta se deseja alterar outra conta
        gotoxy(2, 23);
        printf("Deseja alterar outra Conta 1-Sim / 2-Nao: ");
        scanf("%d", &res);

    } while (res == 1);
}