#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <string.h>
#include <iostream>
#define aux 30
using namespace std;

struct TCredencial {
	char usuario[10];
	char senha[10];
} credencial;

struct tp_endereco{
	string logradouro;
	string bairro;
	string cidade;
	string UF;
};

struct cadastro_cliente{
	string nome_cliente;
	int idade;
	string sexo;
	struct tp_endereco endereco;

	void inserir(string nome = "N/A", int anos_de_vida = 0, string genero = "N/A", string logra = "N/A", string bai = "N/A", string cid = "N/A", string estado = "N/A"){
    	nome_cliente = nome;
    	idade = anos_de_vida;
    	sexo = genero;
    	endereco.logradouro = logra;
		endereco.bairro = bai;
		endereco.cidade = cid;
		endereco.UF = estado;
    }
	void imprimir(){
    cout << "Dados do Cliente:" << nome_cliente << endl << idade << endl << sexo << endl << "Endereco:" 
	<< endereco.logradouro << endl << endereco.cidade << endl << endereco.UF; 
    }
};

int main (void) {
	/*while (true) {
		system ("cls");
		puts ("\n===========================================");	
		printf ("Usuario: ");
		gets (credencial.usuario);
		printf ("Senha: ");
		gets (credencial.senha);	
		puts ("\n===========================================\n");	
		
		if (!(strcmp("Lailson", credencial.usuario)) and 
		    !(strcmp("Multivix", credencial.senha))){
				cout << "Credenciais Validadas! Carregando Menu de Cadastro..." << endl;
				system("pause");
				break;
		}
	cout << "Credenciais Invalidadas! Tente Novamente!" << endl;
	system("pause");
	}*/
	int cont = 0;
	while (true) {
		system ("cls");
		cout << "===========================================\n";
		cout << "===== MENU DE ESCOLHA PARA CADASTRO =======\n";
		cout << "===========================================\n";
		cout << "Digite 1 para um Novo Cadastro\n";
		cout << "Digite 2 para um Ler um Cadastro\n";
		cout << "Digite 3 para Sair do Menu\n";
		cout << "Atualmente ha: " << cont << " cadastros" << endl;
		// falta listar todos que estao cadastrados fazer um for dos nomes ate cont
		int menu;
		cin >> menu;
    	cadastro_cliente *vetorstruct = new cadastro_cliente[100];
    	cadastro_cliente cliente[100];
		for (int i = 0; i < 100; i++){
        vetorstruct[i] = cliente[i];
		}
		if (menu == 1){
			int id;
			char a[aux], b[aux], c[aux], d[aux], e[aux], f[aux];
			system ("cls");
			cout << "===========================================\n";
			cout << "================= CADASTRO ================\n";
			cout << "===========================================\n";
			cout << "Nome completo: ";
			scanf(" %[^\n]", a);
			cout << "Idade: ";
			cin >> id;
			cout << "Genero: ";
			scanf(" %[^\n]", b);
			cout << "Agora seu endereco: \n";
			cout << "Logradouro: ";
			scanf(" %[^\n]", c);
			cout << "Bairro: ";
			scanf(" %[^\n]", d);
			cout << "Cidade: ";
			scanf(" %[^\n]", e);
			cout << "UF: ";
			scanf(" %[^\n]", f);
			string aA, bB, cC, dD, eE, fF;
			aA = a; 
			bB = b; 
			cC = c; 
			dD = d; 
			fF = f;
			vetorstruct[cont].inserir(aA, id, bB, cC, dD, eE, fF);
			cont++;
		}
		if (menu == 2){
			system ("cls");
			cout << "Dado o fato que ha: " << cont << " cadastrados digite qual quer ler." << endl;
			int sec;
			cin >> sec;
			vetorstruct[sec].imprimir();
			system("pause");
		}
		if (menu == 3){
			cout << "Finalizando Cadastros.. Saindo do Menu.";
			break;
		}
	
	}

}