#ifndef CLASSE_H_INCLUDED
#define CLASSE_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

typedef struct endereco{	
    string logradouro;
    string bairro;
    string cidade;
    string UF;
}end;

typedef struct cliente{
    string nome;
    int idade;
    string sexo;
}dados;

class cadastro{

public: 
    cliente dados[100];
    cadastro();
    string get_dados(int choosed);
    string get_end(int qual_choosed);
    string set_end(int choosed, string name);
  
private:
    endereco end[100];
};

cadastro::cadastro(){
}

string cadastro::get_dados(int wich_choosed){
    switch (wich_choosed){
    case 1:
        return dados->nome;
    case 2:
        return dados->sexo;
    default:
        break;
    }
}

string cadastro::get_end(int qual_choosed){
    switch (qual_choosed){
    case 1:
        return end->logradouro;
    case 2:
        return end->bairro;
    case 3:
        return end->cidade;
    case 4:
        return end->UF;
    default:
        break;
    }
}

string cadastro::set_end(int choosed, string name){
    switch (choosed){
    case 1:
        return end->logradouro = name;
    case 2:
        return end->bairro = name;
    case 3:
        return end->cidade = name;
    case 4:
        return end->UF = name;
    default:
        break;
    }
}

#endif