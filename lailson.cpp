#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <string.h>
#include <iostream>
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
    cout << "Sua struct tem " << nome_cliente << idade << sexo << endereco.logradouro << endereco.cidade << endereco.UF; 
    }
};

int main (void) {
	while (true) {
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
	}
	while (true) {
		int cont = 0;
		system ("cls");
		cout << "===========================================\n";
		cout << "===== MENU DE ESCOLHA PARA CADASTRO =======\n";
		cout << "===========================================\n";
		cout << "Digite 1 para um Novo Cadastro\n";
		cout << "Digite 2 para um Ler um Cadastro\n";
		cout << "Digite 3 para Sair do Menu\n";
		cout << "Atualmente há: " << cont << " cadastros";
		// falta listar todos que estao cadastrados
		char menu;
		cin >> menu;
    	cadastro_cliente *vetorstruct = new cadastro_cliente[100];
    	cadastro_cliente cliente[100];
		for (int i = 0; i <= 100; i++){
        vetorstruct[i] = cliente[i];
		}
		if (menu == 1){
			int id;
			string a, b , c , d , e, f;
			system ("cls");
			cout << "===========================================\n";
			cout << "================= CADASTRO ================\n";
			cout << "===========================================\n";
			cout << "Nome completo: ";
			gets(a);
			cout << "Idade: ";
			gets(id);
			cout << "Genero: ";
			gets(b);
			cout << "Agora seu endereço: \n";
			cout << "Logradouro: ";
			gets(c);
			cout << "Bairro: ";
			gets(d);
			cout << "Cidade: ";
			gets(e);
			cout << "UF: ";
			gets(f);
			vetorstruct[cont].inserir(a, id, b, c , d, e, f);
			cont++;
		}










	}









}