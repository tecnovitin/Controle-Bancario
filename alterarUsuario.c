#include "funcoes.h"
#include <stdio.h>
#include <conio.h>
#include <string.h>

/*
    void alterarConta(TipoLista* L) {
    conta_bancaria con; // Declaração correta da variável de tipo conta_bancaria
    TipoApontador aux;  // Ponteiro para percorrer a lista
    int res, cam, status;

    do {
        system("cls");
        tela(); // Exibe a interface inicial (presumidamente definida em outro lugar)

        // Loop para localizar a conta pelo código
        do {
            gotoxy(2, 23);
            printf("Digite um Codigo: ");
            scanf("%d", &con.codigo_conta);

            // Pesquisa a conta pelo código
            aux = pesquisa(L, con.codigo_conta);
            if (aux == NULL) {
                gotoxy(2, 23);
                printf("Conta nao encontrada.");
                getch(); // Aguarda entrada para limpar a mensagem
            }
        } while(aux == NULL);

        // Exibe os dados da conta
        gotoxy(5, 7);
        printf("1 - Codigo: %d", aux->conteudo.codigo_conta);
        gotoxy(5, 9);
        printf("2 - Banco: %s", aux->conteudo.banco);
        gotoxy(5, 11);
        printf("3 - Agencia: %s", aux->conteudo.agencia);
        gotoxy(5, 13);
        printf("4 - Numero da Conta: %s", aux->conteudo.numero_conta);
        gotoxy(5, 15);
        printf("5 - Tipo da Conta: %s", aux->conteudo.tipo_conta);
        gotoxy(5, 17);
        printf("6 - Valor do Saldo: %.2f", aux->conteudo.vl_saldo);
        gotoxy(5, 19);
        printf("7 - Valor do Limite: %.2f", aux->conteudo.vl_limite);
        gotoxy(5, 21);
        printf("8 - Status: %s", aux->conteudo.status);

        // Pergunta se deseja alterar os dados
        gotoxy(2, 23);
        printf("Deseja alterar 1-Sim / 2-Nao: ");
        scanf("%d", &res);

        if (res == 1) {
            // Loop para selecionar e alterar um campo
            do {
                gotoxy(2, 23);
                printf("Digite o campo para alterar (2 ao 4, 7, 8): ");
                scanf("%d", &cam);

                switch (cam) {
                case 2: // Alterar banco
                    gotoxy(16, 9);
                    printf("                          ");
                    gotoxy(16, 9);
                    printf("Novo Banco: ");
                    scanf(" %49s", aux->conteudo.banco);
                    break;
                case 3: // Alterar agência
                    gotoxy(18, 11);
                    printf("                          ");
                    gotoxy(18, 11);
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
*/