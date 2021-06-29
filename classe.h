#ifndef CLASSE_H_INCLUDED
#define CLASSE_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

struct endereco{	
    string logradouro;
    string bairro;
    string cidade;
    string UF;
};

struct cliente{
    string nome;
    int idade;
    string sexo;
};

class cadastro{

public: 
    cliente dados[100];
    cadastro();
    void imprimir();
    void set_end_logr(string name);
    void set_end_bair(string name);
    void set_end_cid(string name);
    void set_end_UF(string name);

private:
    endereco end[100];
};

cadastro::cadastro(){
}

void cadastro::imprimir(){
}

void cadastro::set_end_logr(string name){
    end->logradouro = name;
}
void cadastro::set_end_bair(string name){
    end->bairro = name;
}
void cadastro::set_end_cid(string name){
    end->cidade = name;
}
void cadastro::set_end_UF(string name){
    end->UF = name;
}


#endif