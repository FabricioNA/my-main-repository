/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 20/04/2021
Programa: Verificacao de usuario, Mai/Miusculo por byte, e gerador de email
Exercicio: Lista 02 
==========================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
#include <bitset>

using namespace std;

static bitset<8> bits;
bitset<8> ToBits(unsigned char byte){
	bits = bitset<8>(byte);
    return bits;
}

int main (void) {
	inicio: // marcador de inicio do codigo
	system("cls");
	cout << "========================================" << endl;
	cout << "      Digite seu Usuario e Senha" << endl;
	cout << "========================================" << endl;

// Obtençao do login e senha
	char usuario[20], senha[20];
	cout << "Usuario: ";
	cin >> usuario;
	cout << "Senha: ";
	cin >> senha;

// Verficaçao de usuario
	if (!(strcmp(usuario, "Erika") == 0 || strcmp(usuario, "Fabricio") ==0 || strcmp(usuario, "Lailson") == 0|| strcmp(usuario, "Bruno") == 0)){
		if (!(strcmp(senha, "multivix") == 0 )){
			cout << endl << "Credenciais Invalidas. Tente novamente" << endl;
			system("pause");
			goto inicio; // quando senha e usuario estao errados
		}
		else{
			cout << endl << "Credenciais Invalidas. Tente novamente" << endl;
			system("pause");\
			goto inicio; // quando a senha esta certa e o usuario errado
		}
	}
	else if (strcmp(usuario, "Erika") == 1 || strcmp(usuario, "Fabricio") == 1 || strcmp(usuario, "Lailson") == 1|| strcmp(usuario, "Bruno") == 1){
		if (strcmp(senha, "multivix")){
			cout << endl << "Credenciais Invalidas. Tente novamente" << endl;
			system("pause");
			goto inicio; // quando o usuario esta certo mas a senha errada
		}
		else{
			cout << "Credenciais Validadas, Area Restrita: PERMITIDA" << endl;
			system("pause");
			goto validado; // quando a senha e usuario estao certos
		}
	}

	validado: // marcador para continuidade do codigo
	system("cls");
	//Pós validado. Obter nome completo
	char nome[50];
	cout << "========================================" << endl;
	cout << "Digite seu Nome Completo:" << endl;
	cout << "========================================" << endl;
    scanf(" %[^\n]", nome);
	// transformando cada letra em byte é notado que o quinto byte é a diferença de maiusculo pra minusculo dessa forma é feito a leitura e condiçao

	for (int i = 0; i < strlen(nome); i++){ 
		char aux = nome[i];
		if (isalpha(aux) && aux != ' '){
			bitset<8> verifybits = ToBits(aux);
			cout << aux;
			if(verifybits[5] == 0){
				cout << " >> Maiuscula" << endl;
			}
			else{
				cout << " >> Minuscula" << endl;
			}
		}	
	}
	system("pause");
	system("cls");
	// Traformar o nome inteiro em minusculo
	for (int i = 0; i < strlen(nome); i++) {
	   	nome[i] = tolower(nome[i]);
	}
	cout << "Seu Nome Minusculo:" << endl;
	cout << nome << endl;
	// após isso separar o nome em primeiro e ultimo
	string strNome(nome), primNome, ultNome;
	while(true) {
		int posicao = (int)strNome.find(' ');
		if (posicao == -1) {
	   		ultNome = strNome;
	   		break;
		} 
		if (primNome.length() == 0) {
			primNome = strNome.substr(0, posicao);
		}
	strNome = strNome.substr(posicao+1);
	}
	// montando email 
	string emailnovo = primNome + "." + ultNome + "@multivix.edu.br";
	cout << "Seu novo email fica como:" << endl;
	cout << emailnovo << endl;
	system("pause");
}