// Bruno kenji
// dupla com Victor 
#include "funcoes.h"


int main (){
    TipoLista L; 
    TipoLista contas;
    
    tela();
    InicializaSimplismente(&contas);
    carregarCT("contas.dat", &contas);
   
    Menu_Principal();
    salvarCT("contas.dat", &contas);
return 0;

}