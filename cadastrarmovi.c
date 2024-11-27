/*
AUTOR........: Bruno Kenji 168899-2024
EQUIPE.......: Victor Gabriel 160612-202
...... .......160612-2023- VICTOR GABRIEL;
FUNÇÃO DO COD: TROCAR DE AS CONTAS BANCARIAS.

*/

#include "funcoes.h"

void cadastrarmovi(conta_bancaria *localconta, TipoLista2 *L2, TipoLista *L){
  int codConta;
  movimentacao mv ;
  TipoApontador aux = NULL;
  conta_bancaria *conta = NULL;
  
    
    do
    {
    LimpaTela();
    gotoxy(38,6);
    scanf("%d", &codConta);

    if(codConta == 0){
      LimpaTela();
      Menu_Principal();
      return;
    }
    
      aux = L->Primeiro;
    while (aux != NULL) {
        if (aux->conteudo.codigo_conta == codConta) {
            conta = &(aux->conteudo);
            break;
        }
        aux = aux->proximo;
    }
       if (conta == NULL) {
        gotoxy(11,24 );
        printf("Conta nao encontrada.");
        getch();
        gotoxy(11,24 );
        printf("                       ");
      
       }
    }while(conta == NULL);

      gotoxy(28, 8);
    printf("%s", conta->banco);
    gotoxy(28, 9);
    printf("%s", conta->agencia);
    gotoxy(28, 10);
    printf("%s", conta->numero_conta);
    gotoxy(28, 11);
    printf("%.2f", conta->vl_saldo);
    gotoxy(28, 12);
    printf("%.2f", conta->vl_limite);
    gotoxy(38, 15);
    fflush(stdin);
    fgets(mv.dt_movimento, 11, stdin);  
    gotoxy(38, 16);
    fflush(stdin);
    fgets(mv.tp_movimentacao, 15, stdin);

    gotoxy(46, 17);
    fflush(stdin);
    fgets(mv.favorecido, 50, stdin);

    gotoxy(46, 18);
    scanf("%f", &mv.vl_movimento);

      if (strcmp(mv.tp_movimentacao, "Debito")==0){
        if ((conta->vl_saldo - mv.vl_movimento) < -conta->vl_limite)
        {
          gotoxy(11,24);
          printf("Saldo insuficiente");
          return;
        }
        conta->vl_saldo -= mv.vl_movimento; 
      }else if (strcmp(mv.tp_movimentacao, "Credito")==0)
      {
        double total_disponivel = conta->vl_saldo + conta->vl_limite;
      if (mv.vl_movimento > total_disponivel)
      {
        gotoxy(11,24 );
        printf("Saldo e credito insuficiente");
        return;
      
      }
      conta ->vl_saldo += mv.vl_movimento;
      }else{
        gotoxy(11,24 );
        printf("Tipo de Movimentação invalida");
        return;
      }
      
    mv.vl_saldo = conta->vl_saldo;
    mv.codigo_conta= conta->codigo_conta;
      gotoxy(46,19);
      printf("%.2f", conta->vl_saldo);

     registrarMovimentacao(L2, &mv);  //registrarMovimentacao(TipoLista2 *L2, movimentacao *mv);

    gotoxy(11, 24);
    printf("Movimentacao cadastrada com sucesso!");
    getch();
    printf("                                     ");
}