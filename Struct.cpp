#include <iostream>
#include <string>

using namespace std;

struct Struct{
    string teste;
    string variante;
    int valorinicial;
    int valorfinal;

    void inserir(string stteste = " ", string stvariante = " ", int stvalorinicial = 0, int stvalorfinal = 0){
        teste = stteste;
        variante = stvariante;
        valorinicial = stvalorinicial;
        valorfinal = stvalorfinal;
    }
    void imprimir(){
        cout << "Sua struct tem " << teste << variante << valorinicial << valorfinal; 
    }
};
int main(){
    Struct *testedocodigo = new Struct[5];
    Struct teste[5];
    for (size_t i = 0; i < 5; i++){
        testedocodigo[i] = teste[i];
    }
    for (size_t i = 0; i < 5; i++){
        testedocodigo[i].inserir("testando for");
    } 
    for (size_t i = 0; i < 5; i++){
        testedocodigo[i].imprimir();
    }
return EXIT_SUCCESS;
}
    
    /*Struct teste1, teste2, teste3, teste4, teste5;

    testedocodigo[0] = teste1; testedocodigo[1] = teste2; testedocodigo[2] = teste3; testedocodigo[3] = teste4; testedocodigo[4] = teste5;

    testedocodigo[0].inserir("Seu\n");
    testedocodigo[1].inserir("Cu\n");
    testedocodigo[2].inserir("Eh\n");
    testedocodigo[3].inserir("Meu\n");
    testedocodigo[4].inserir("Poha\n");
    */



