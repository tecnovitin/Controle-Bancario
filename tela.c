//Bruno kenji
//Dupla com Victor

#include <funcoes.h>
void tela() {
    int linha;
    system("cls");

    for (linha = 1; linha < 26; linha++) {
        gotoxy(1, linha);
        printf("|");
        gotoxy(79, linha);
        printf("|");
    }

    gotoxy(1, 0);
    printf("-------------------------------------------------------------------------------");
    gotoxy(2, 3);
    printf("-----------------------------------------------------------------------------");
    gotoxy(2, 23);
    printf("-----------------------------------------------------------------------------");
    gotoxy(1, 25);
    printf("-------------------------------------------------------------------------------");

    gotoxy(3, 1);
    printf("UNICV");
    gotoxy(3, 2);
    printf("Sistema de Gerenciamento Bancario");
    gotoxy(2, 24);
    printf("Mensagem:");
}