#ifndef CLASSE_H_INCLUDED
#define CLASSE_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

struct endereco {
	std::string logr;
	std::string bairro;
	std::string cidade;
	char uf[2];
};

class cliente{

public: 
    std::string nome;
    int idade;
    char sexo;
    std::string faixa_etaria;
    cliente(int tp);
    void imprimir();

private:
    endereco end;

};

cliente::cliente(int tp){
    switch (tp){
        case 1:
            faixa_etaria = "Crianca";
            break;
        case 2:
            faixa_etaria = "Adulto";
            break;
        case 3:
            faixa_etaria = "Idoso";
            break;
        default:
            break;
    }
}

void cliente::imprimir(){
    std::cout << "Faxa etaria" << faixa_etaria << std::endl;

}
#endif // !1