#include "funcoes.h"

void Tela_Cadastro() {
  
    gotoxy(7,5);
    printf("Codigo da Conta...:                               ");
    gotoxy(7,7);
    printf("1-Banco...........:                               ");
    gotoxy(7,9);
    printf("2-Agencia.........:                               ");
    gotoxy(7,11);
    printf("3-Numero Da Conta.:                               ");
    gotoxy(7,13);
    printf("4-Tipo Da Conta...:                               ");
    gotoxy(7,15);
    printf("5-Saldo...........:                               ");
    gotoxy(7,17);
    printf("6-Limite..........:                               ");
    gotoxy(7,19);
    printf("7-Status..........:                               ");

    Cadastrar();

}