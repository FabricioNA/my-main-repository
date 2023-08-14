
/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 31/05/2021
Programa: Cadastro com Strutc
Exercicio: Lista 05
==========================================================*/

#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

struct TCredencial {
	char usuario[10];
	char senha[10];
} credencial;

struct cliente{
    char nome[20];
    int idade;
    char sexo[20];
    char endereco[25];
}dados[20];

struct pessoa{	
    char logradouro[20];
    char bairro[20];
    char cidade[20];
    char UF[20];
}endereco[20];

int i, cont, resposta;

int main(){
	while (true) {
		system ("cls");
		puts ("\n===========================================");	
		printf ("Usuario: ");
		gets (credencial.usuario);
		printf ("Senha: ");
		gets (credencial.senha);	
		puts ("\n===========================================\n");	
		
		if (!(strcmp("Fabricio", credencial.usuario)) and !(strcmp("multivix", credencial.senha))){
				cout << "Credenciais Validadas! Carregando Menu de Cadastro..." << endl;
				system("pause");
				break;
		}
	cout << "Credenciais Invalidadas! Tente Novamente!" << endl;
	system("pause");
	system ("color F5");
	}
    int opcao, teste;
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
        cin >> dados[i].nome;

        cout << "Sua idade:" << endl;
        cin >> dados[i].idade;

        cout << endl << "Informe o sexo:" << endl;
        cin >> dados[i].sexo;

        cout << "Endereco:" << endl;
        cin >> dados[i].endereco;

        cout << endl << "Informe o logradouro:" << endl;
        cin >> endereco[i].logradouro;

        cout << "Bairro:" << endl;
        cin >> endereco[i].bairro;

        cout << endl << "Informe a Cidade:" << endl;
        cin >> endereco[i].cidade;

        cout << "Estado(UF):" <<endl;
        cin >> endereco[i].UF;
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
