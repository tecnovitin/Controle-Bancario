#include "funcoes.h"

void casdastrarmovi(conta_bancaria *conta){

 movimentacao mv;

    gotoxy(46, 15);
    fflush(stdin);
    scanf(mv.dt_movimento, 11, stdin);

    gotoxy(46, 16);
    fflush(stdin);
    fgets(mv.tp_movimentacao, 15, stdin);

    gotoxy(46, 17);
    fflush(stdin);
    fgets(mv.favorecido, 50, stdin);

    gotoxy(46, 18);
    scanf("%.2f", &mv.vl_movimento);

      if (strcmp(mv.tp_movimentacao, "Debito")==0){
        if ((conta->vl_saldo - mv.vl_movimento) < -conta->vl_limite)
        {
          gotoxy(11,24);
          printf("Saldo insuficiente0");
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
        printf("Tipo de Movimentação invalida");
        return;
      }
      
    mv.vl_saldo = conta->vl_saldo;
    mv.codigo_conta= conta->codigo_conta;
      gotoxy(46,19);
      printf("%.2f", conta->vl_saldo);

    

}