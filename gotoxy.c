/*
AUTOR........: Bruno Kenji 168899-2024
EQUIPE.......: Victor Gabriel 160612-202
...... .......160612-2023- VICTOR GABRIEL;
FUNÇÃO DO COD: TROCAR DE AS CONTAS BANCARIAS.

*/
#include "funcoes.h"



void gotoxy(int x, int y){
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}