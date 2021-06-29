#include <iostream>
#include <string>
#include "function_uteis.cpp"
#include "classe.h"
using namespace std;

// o -> substitui o . para se referir como acontece na struct

int i, cont, resposta;
string aux;

int main(int argc, const char** argv) {
    int opcao, teste,
    i = 0,cont = 0,resposta = 0;

    void Cadastro();
    void Exibir();

    do{
        cout << "\a---- Sistema de Cadastro de Clientes ----" << endl;
        cout << endl <<" 1-Efetuar cadastro" << endl;
        cout << " 2-Lista de Clientes" << endl;
        cout << " 3-Sair" << endl;
        cout << endl << "-----------------------------------------" << endl;
        cout << endl << "Escolha uma opcao:" << endl;
        cin >> opcao;

        switch (opcao){
            case 1:
            Cadastro();
            break;

            case 2:
            Exibir();
            break;

            case 3:
            exit(1);
            break;

            default:
            system("cls");
            printf("\nOpcao Invalida!!Por favor tente novamente.\n\n");
            resposta = 1;
            break;
        }
    cout << "Digite 1 para voltar ao menu ou outro" << endl << "numero para sair:" << endl;
    cin >> resposta;
    system("cls");
    }
while(resposta == 1);
return EXIT_SUCCESS;
}
void Cadastro(){
    do{
        cadastro *cd = new cadastro;
        cout << endl << "Informe seu nome:" << endl;
        cin >> cd -> dados[i].nome;

        cout << "Sua idade:" << endl;
        cin >> cd -> dados[i].idade;

        cout << endl << "Informe o sexo:" << endl;
        cin >> cd -> dados[i].sexo;

        cout << endl << "Informe o logradouro:" << endl;
        cin >> aux;
        cd ->set_end_logr(aux);

        cout << "Bairro:" << endl;
        cin >> aux;
        cd ->set_end_bair(aux);

        cout << endl << "Informe a Cidade:" << endl;
        cin >> aux;
        cd ->set_end_cid(aux);

        cout << endl << "Informe a UF:" << endl;
        cin >> aux;
        cd ->set_end_UF(aux);

        system("cls");

        cout << endl << "----- Cadastro concluido com sucesso -----" << endl;
        cout << endl << "Deseja realizar um novo cadastro ?" << endl << endl;
        cout << "[1]-Sim [outro numero]-Nao" << endl;
        cout << endl << "------------------------------------------" << endl;

        cout << endl << "Informe sua resposta:" << endl;
        cin >> resposta;
        system("cls");

        setbuf(stdin,NULL);
        i++;
        cont++;
    }
while(resposta == 1);
return;
}

void Exibir(){
    int contador2 = 0;
    system("cls");

    cout << "---------- Lista de clientes -------------" << endl;
    do{
        cout << endl << "------------ Cadastros" << contador2 + 1 << " ----------------" << endl;
        cout << endl << "NOME:" << dados[contador2].nome << endl;
        cout << "Idade:" << dados[contador2].idade << endl;
        cout << "Sexo:" << dados[contador2].sexo << endl;
        cout << "Endereco:" << dados[contador2].endereco << endl;
        cout << "Logradouro:" << endereco[contador2].logradouro << endl;
        cout << "Bairro:" << endereco[contador2].bairro << endl;
        cout << "Cidade:" << endereco[contador2].cidade << endl;
        cout << "Estado(UF):" << endereco[contador2].UF << endl;
        cout << endl << "------------------------------------------" << endl << endl;
        contador2++;
    }
while(contador2 < cont);
return;
}
