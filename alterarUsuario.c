#include "funcoes.h"

TipoApontador pesquisa(TipoLista* L, int codigo) {
    TipoApontador atual = L->Primeiro; 
    
    while (atual != NULL) {
        if (atual->conteudo.codigo_conta == codigo) {
            return atual;
        }
        atual = atual->proximo;
    }

    return NULL; 
}



void alterarConta(TipoLista* L) {
    conta_bancaria con; 
    TipoApontador aux; 
    int res, cam, status;

    do {
        system("cls");
        tela(); //

        //acha a conta pelo codigo
        do {
            gotoxy(11,4);
            printf("Digite um Codigo: ");
            gotoxy(30,4);
            scanf("%d", &con.codigo_conta);

            if(con.codigo_conta == 0){
                LimpaTela();                
                Menu_Contas();
            }


            // Pesquisa a conta pelo codigo
            aux = pesquisa(L, con.codigo_conta);
            if (aux == NULL) {
                gotoxy(11,24);
                printf("Conta nao encontrada.     ");
                getchar(); 
            }
        } while (aux == NULL);

        //dados da conta se achar
        gotoxy(7,5);
        printf("1 - Codigo.........: %d\n", aux->conteudo.codigo_conta);
        gotoxy(7,7);
        printf("2 - Banco..........: %s\n", aux->conteudo.banco);
        gotoxy(7,9);
        printf("3 - Agencia........: %s\n", aux->conteudo.agencia);
        gotoxy(7,11);
        printf("4 - Numero da Conta: %s\n", aux->conteudo.numero_conta);
        gotoxy(7,13);
        printf("5 - Tipo da Conta..: %s\n", aux->conteudo.tipo_conta);
        gotoxy(7,15);
        printf("6 - Valor do Saldo.: %.2f\n", aux->conteudo.vl_saldo);
        gotoxy(7,17);
        printf("7 - Valor do Limite: %.2f\n", aux->conteudo.vl_limite);
        gotoxy(7,19);
        printf("8 - Status.........: %s\n", aux->conteudo.status);

        gotoxy(11,24);
        printf("Deseja alterar 1-Sim / 2-Nao: ");
        gotoxy(42,24);
        scanf("%d", &res);

        if (res == 1) {
            
            do {
                gotoxy(11,24);
                printf("Digite o campo para alterar (2 ao 4): ");
                gotoxy(51,24);
                scanf("%d", &cam);

                switch (cam) {
                case 2: 
                    gotoxy(26, 7);
                    scanf(" %49s", aux->conteudo.banco);
                    break;
                case 3: 
                    gotoxy(26, 9);
                    scanf(" %9s", aux->conteudo.agencia);
                    break;
                case 4: 
                    gotoxy(26, 13);
                    printf("                          ");
                    gotoxy(26, 13);
                    printf("Novo Numero: ");

                    scanf(" %19s", aux->conteudo.numero_conta);
                    break;
                case 5:
                    gotoxy(11, 24);
                    ("Campo nao pode ser alterado         ");
                    break;
                case 6:
                    gotoxy(11, 24);
                    ("Campo nao pode ser alterado         ");
                    break;
                case 7: 
                    gotoxy(11, 24);
                    ("Campo nao pode ser alterado         ");
                    break;
                case 8: 
                    gotoxy(11, 24);
                    ("Campo nao pode ser alterado         ");
                    break;
                default:
                    gotoxy(11, 24);
                    printf("Campo invalido! Tente novamente.");
                    getch();
                }
            } while (cam < 2 || cam > 4 && cam != 7 && cam != 8);
               
            gotoxy(11, 24);
            printf("Alteracao realizada com sucesso!            ");
            getch();
        
        }

        gotoxy(2, 23);
        printf("Deseja alterar outra Conta 1-Sim / 2-Nao: ");
        scanf("%d", &res);

    } while (res == 1);
    
    Menu_Contas();
}
