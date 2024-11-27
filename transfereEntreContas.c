/*
AUTOR........: VICTOR GABRIEL DA SILVA
EQUIPE.......: 168899-2024- BRUNO KENJI;
...... .......160612-2023- VICTOR GABRIEL;
FUNÇÃO DO COD: FAZ TRANSFERENCIA ENTRE AS CONTAS.

*/

#include "funcoes.h"

void Transferencia(TipoLista *L){
    int conta_O, conta_D;
    float valor;
    TipoApontador contaO, contaD;
    char data[11];
do
{


    gotoxy(18,6);
    scanf("%d", &conta_O);

    if(conta_O == 0) {
        LimpaTela();      
        Menu_Principal();
        return;
    }
   
    

    contaO = pesquisa(L, conta_O);
    if(contaO == NULL){
        gotoxy(12, 24);
        printf("Conta origem não encontrada.");
        getch();
        gotoxy(12, 24);
        printf("                             ");
    
    }
    
    
    }while (contaO == NULL);

    gotoxy(21, 6);
    printf("%s", contaO->conteudo.numero_conta);
    gotoxy(21, 7);
    printf("%s", contaO->conteudo.banco);
    gotoxy(21, 8);
    printf("%s", contaO->conteudo.agencia);
    gotoxy(21, 9);
    printf("%s", contaO->conteudo.numero_conta);
    gotoxy(21, 10);
    printf("%s", contaO->conteudo.tipo_conta);
    gotoxy(21, 11);
    printf("%.2f", contaO->conteudo.vl_saldo);
    gotoxy(21, 12);
    printf("%.2f", contaO->conteudo.vl_limite);
    gotoxy(21, 13);
    printf("%.2f", contaO->conteudo.vl_saldo); 
    gotoxy(21,14);
    printf("%.2f", contaO->conteudo.vl_limite);

    do
    {
    
    
    
     gotoxy(60,6);
    scanf("%d", &conta_D);
    
    do
    {
    gotoxy(36,16);
    scanf("%f", &valor);
    
       if ((contaO->conteudo.vl_saldo + contaO->conteudo.vl_limite)< valor);
    {
        gotoxy(12,24);
        printf("Saldo insuficiente");
        getch();
        gotoxy(12, 24);
        printf("                             ");
    
    }
    
    } while ((contaO->conteudo.vl_saldo + contaO->conteudo.vl_limite)< valor);

    contaD = pesquisa(L, conta_D);
    
        if (contaD == NULL)
        {
            gotoxy(12, 24);
            printf("Conta para de destino não encontrada.");
            getch();
            gotoxy(12, 24);
            printf("                                         ");
    
        }
    }while (contaD == NULL);
  
    gotoxy(40, 6);
    printf("%s", contaD->conteudo.numero_conta);
    gotoxy(40, 7);
    printf("%s", contaD->conteudo.banco);
    gotoxy(40, 8);
    printf("%s", contaD->conteudo.agencia);
    gotoxy(40, 9);
    printf("%s", contaD->conteudo.numero_conta);
    gotoxy(40, 10);
    printf("%s", contaD->conteudo.tipo_conta);
    gotoxy(40, 11);
    printf("%.2f", contaD->conteudo.vl_saldo);
    gotoxy(40, 12);
    printf("%.2f", contaD->conteudo.vl_limite);
    gotoxy(40, 13);
    printf("%.2f", contaD->conteudo.vl_saldo + contaD->conteudo.vl_limite);
    gotoxy(60,14);
    printf("%.2f", contaD->conteudo.vl_saldo + valor);

    // Solicita a data da transferência (pode ser a data atual)
    gotoxy(45, 17);
    scanf("%s", data);  // Lê a data 

    //atualiza os saldos
    contaO->conteudo.vl_saldo -= valor;
    contaD->conteudo.vl_saldo += valor;

    movimentacao movO ={
        .codigo_conta=conta_O,
        .vl_movimento = -valor,
        .vl_saldo = contaO->conteudo.vl_saldo,

    };

        strcpy(movO.tp_movimentacao, "Transferencia feita");
        strcpy(movO.dt_movimento, data);
        registrarMovimentacao(&(contaO->conteudo.movimentacao), &movO);


        movimentacao movD ={
            .codigo_conta = conta_D,
            .vl_movimento = valor,
            .vl_saldo = contaD->conteudo.vl_saldo, 
        };

        strcpy(movD.tp_movimentacao, "Transferencia recebida");
        strcpy(movD.dt_movimento, data);
        registrarMovimentacao(&(contaD->conteudo.movimentacao), &movD);

        gotoxy(12,24);
        printf("Transferência realizada com sucesso!");
        getch();
        gotoxy(12, 24);
        printf("                                         ");
    


}