/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 20/04/2021
Programa: Gerando Email
Exercicio: Lista 02 
==========================================================*/
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

int main (void) {
	
	// ========================== CREDENCIAIS PARA LOGAR NO SISTEMA
	puts("========================================\n");
	puts("          Informe as credenciais\n");
	puts("========================================\n");
	char usuario[20];
	char senha[20];
	
	puts("Usuario: ");
	gets(usuario);
	puts("Senha: ");
	gets(senha);
	
	if (!(strcmp(usuario, "erika") == 0 &&
	   strcmp(senha, "multivix") == 0)) {
	   	puts ("Credencial Invalida");
	   	return -1;
	   }
	   
	   puts ("Credencial Valida");
	   puts ("\n\nArea restrita para usuario logado!");
	   
	   // ======================== RECEBER O NOME E TORNÁ-LO MINÚSCULO
	   char nome[80];
	   puts("Informe o Seu Nome Completo:");
	   gets(nome);
	   
	   for (int i=0; i < strlen(nome); i++) {
	   	nome[i] = tolower(nome[i]);
	   }
	   
	   puts("Nome Minúsculo:");
	   puts (nome);
	   
	   
	   // ======================= UTILIZAR STRING PARA SEPARAR O PRIMEIRO NOME DO ÚLTIMO
	   string strNome(nome);
	   string primNome;
	   string ultNome;
	   
	   while(true) {
	   	int posicao = (int)strNome.find(' ');
	   	if (posicao == -1) {
	   		ultNome = strNome;
	   		break;
		   }
		   
		   if (primNome.length() == 0) {
		   	primNome = strNome.substr(0, posicao);
		   	//break;
		   }
		   strNome = strNome.substr(posicao+1);
	   }
	   
	   // ======================= MONTAR O EMAIL
	   string email = primNome;
	   email.append(".");
	   email.append(ultNome);
	   email.append("@multivix.edu.br");
	   
	   puts(email.c_str());
}