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
}end[100];

typedef struct cliente{
    string nome;
    int idade;
    string sexo;
}dados[100];

class cadastro{

public: 
    cliente dados[100];
    cadastro(); // construtor
    string get_dados(int choosed, int i);
    string get_end(int qual_choosed, int i);
    string set_end(int choosed, string name, int i);
  
private:
    endereco end[100];
};

cadastro::cadastro(){
}

string cadastro::get_dados(int wich_choosed, int i){
    switch (wich_choosed){
    case 1:
        return dados[i].nome;
    case 2:
        return dados[i].sexo;
    default:
        break;
    }
}

string cadastro::get_end(int qual_choosed, int i){
    switch (qual_choosed){
    case 1:
        return end[i].logradouro;
    case 2:
        return end[i].bairro;
    case 3:
        return end[i].cidade;
    case 4:
        return end[i].UF;
    default: 
        break;
    }
}

string cadastro::set_end(int choosed, string name, int i){
    switch (choosed){
    case 1:
        return end[i].logradouro = name;
    case 2:
        return end[i].bairro = name;
    case 3:
        return end[i].cidade = name;
    case 4:
        return end[i].UF = name;
    default:
        break;
    }
}

class cadastro2:public cadastro{
};

#endif