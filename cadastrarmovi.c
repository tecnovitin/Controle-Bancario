



#include <funcoes.h>

void casdastrarmovi(){
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

      double novoSaldo = mv.vl_saldo - mv.vl_movimento;


    gotoxy(46, 19);
    printf("%.2f", novoSaldo);


}