#include "funcoes.h"


void Cadastrar(TipoLista* L){

    int opc, pos;
    
    conta_bancaria Nconta;
    TipoApontador aux;
    
    do
    {
        


        gotoxy(26, 5);  
        fflush(stdin);
        scanf("%d", &Nconta.codigo_conta);

        aux = L->Primeiro;
        while (aux != NULL)
        {
            if (aux->conteudo.codigo_conta == Nconta.codigo_conta)
            {
            gotoxy(11,24);
            printf("Conta já existente.");
            getch();
            LimpaTela();
            break;
            }
            aux=aux->proximo;
        }
    }while (aux != NULL);
    
    

    gotoxy(26, 7);
    fflush(stdin);
    fgets(Nconta.banco, 50, stdin);

    gotoxy(26, 9);
    fflush(stdin);
    fgets(Nconta.agencia, 10, stdin);

    gotoxy(26, 11);
    fflush(stdin);
    fgets(Nconta.numero_conta, 20, stdin);

    gotoxy(26, 13);
    fflush(stdin);
    fgets(Nconta.tipo_conta, 20, stdin);

    gotoxy(26, 15);
    scanf("%f", &Nconta.vl_saldo);

    gotoxy(26, 17);
    scanf("%f", &Nconta.vl_limite);
    


   do {
    LimpaTela();
        gotoxy(10,6);
        printf("Escolha onde deseja inserir a conta:");
        gotoxy(10,8);
        printf("1 - Inserir no Início");
        gotoxy(10,10);
        printf("2 - Inserir na Posicao");
        gotoxy(10,12);
        printf("3 - Inserir no Final");
        gotoxy(11, 24);
        printf("Digite a opcao: ");
        gotoxy(30,24);
        fflush(stdin);
        gotoxy(11, 24);
        scanf("%d", &opc);
        gotoxy(11, 24);
        printf("                         ");

        switch (opc) {
            case 1:
                inserirNoInicio(L, Nconta);
                printf("Cadastrado com sucesso"); 
                getch();
                gotoxy(11, 24);
                printf("                        ");
                getch();
                Menu_Contas();
                break;
            case 2:
                gotoxy(6, 24);
                printf("Digite a posicao: ");
                scanf("%d", &pos);
                InserirNaPosicao(L, Nconta, pos);
               
                gotoxy(11, 24);
                printf("Cadastrado com sucesso");
                getch();
                 gotoxy(11, 24);
                printf("                        ");
                Menu_Contas();
                break;
            case 3:
                InserirNoFinal(L, Nconta);
                printf("Cadastrado com sucesso");
                getch();
                 gotoxy(11, 24);
                printf("                        ");
                Menu_Contas();  // Inserir no final da lista
                break;
            default:
                gotoxy(11, 24);
                printf("Digite uma opção valida!");
                getch();
                limparOpc();
                break;
        }
    } while (opc < 1 || opc > 3);  // Repetir até que a opção seja válida

}