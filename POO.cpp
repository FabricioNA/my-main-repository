#include <iostream>
#include <string>
#include "function_uteis.cpp"
#include "classe.h"
using namespace std;

// o -> substitui o . para se referir como acontece na struct

int i, cont, resposta;
char aux[100];

cadastro *cd = new cadastro;

int main() {
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
        cout << endl << "Informe seu nome:" << endl;
        cin >> cd -> dados[i].nome;

        cout << "Sua idade:" << endl;
        cin >> cd -> dados[i].idade;

        cout << "Informe o sexo:" << endl;
        cin >> cd -> dados[i].sexo;

        cln_buffer();
        cout << "Informe o logradouro:" << endl;
        gets(aux);
        cd -> set_end(1, aux, i);

        cout << "Bairro:" << endl;
        gets(aux);
        cd -> set_end(2, aux, i);

        cout << endl << "Informe a Cidade:" << endl;
        gets(aux);
        cd -> set_end(3, aux, i);

        cout << endl << "Informe a UF:" << endl;
        gets(aux);
        cd -> set_end(4, aux, i);

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
        cout << endl << "------------ Cadastrado " << contador2 + 1 << " ----------------" << endl;
        cout << endl << "NOME:" << cd -> get_dados(1, contador2) << endl;
        cout << "Idade:" << cd -> dados[contador2].idade << endl;
        cout << "Sexo:" << cd -> get_dados(2, contador2) << endl;
        cout << "Logradouro:" << cd ->  get_end(1, contador2) << endl;
        cout << "Bairro:" << cd ->  get_end(2, contador2) << endl;
        cout << "Cidade:" << cd ->  get_end(3, contador2) << endl;
        cout << "Estado(UF):" << cd ->  get_end(4, contador2) << endl;
        cout << endl << "------------------------------------------" << endl << endl;
        contador2++;
    }
while(contador2 < cont);
return;
}
