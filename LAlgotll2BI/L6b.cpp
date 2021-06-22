/* ==========================================================
Aluno: Erika, Fabricio, Lailson, Roger
Data: 08/06/2021
Programa: Cadastro em CSV
Exercicio: Lista 06 letra b
========================================================== */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct endereco {
	char logr[80];
	char bairro[30];
	char cidade[30];
	char uf[2];
};

struct pessoa {
	char nome[80];
	int idade;
	char sexo;
	struct endereco end;
};

struct pessoa pessoas[10];
int qtdRegistros=0;

const int INFO_Nome=0,
          INFO_Idade=1,
          INFO_Sexo=2,
          INFO_Logr=3,
          INFO_Bair=4,
          INFO_Cida=5,
          INFO_Uf=6;
          
void carregar() {
	FILE *arq = fopen("pessoa.csv", "w");
	
	if (arq == NULL) {
		fclose(arq);
		return;
	}
	
	int contaLinha = 0;
	while (!feof(arq)) {
		char linha[500];
		fgets(linha, 500, arq);
		
		int info=0,
		    conta=0;
		int tam=strlen(linha);
		char palavra[100];
		for (int j=0;j<tam;j++) {
			if (linha[j] == ';') {
				char palavraAux[conta+1];
				strncpy(palavraAux, palavra, conta);
				palavraAux[conta] = '0';
				
				//puts("Palavra: ");
				//puts(palavraAux);
				
				
				if (info == INFO_Nome) {
					strcpy(pessoas[contaLinha].nome, palavraAux);
				} else if (info == INFO_Idade) {
					pessoas[contaLinha].idade = atoi (palavraAux);
				} else if (info == INFO_Sexo) {
					pessoas[contaLinha].sexo = palavraAux[0];
				} else if (info == INFO_Logr) {
					strcpy(pessoas[contaLinha].end.logr, palavraAux);
				} else if (info == INFO_Bair) {
					strcpy(pessoas[contaLinha].end.bairro, palavraAux);
				} else if (info == INFO_Cida) {
					strcpy(pessoas[contaLinha].end.cidade, palavraAux);
				} else if (info == INFO_Uf) {
					strcpy(pessoas[contaLinha].end.uf, palavraAux);
				}
				
				info++;
				conta=0;
				continue;
			}
			
			palavra[conta] = linha[j];
			conta++;
		}
	    contaLinha++;
	}
	qtdRegistros =  contaLinha-1;
	fclose(arq);
}
void salvar() {
	FILE *arq = fopen("pessoa.csv", "w");
	
	for (int i=0;i<qtdRegistros;i++) {
		fprintf(arq, "%s;%i;%c;%s;%s;%s;%s; \n",
		pessoas[i].nome, pessoas[i].idade, pessoas[i].sexo,
		pessoas [i].end.logr, pessoas[i].end.bairro, pessoas[i].end.cidade, pessoas[i].end.uf);
	}
	
	fclose(arq);
}


bool login() {
	bool ret = false;
	while(ret==0) {
		system("cls");
		ret = 0;
		char usuario[30];
		char senha[30];
		
		puts("==================================================\n");
		puts("              	Autenticação de usuarios\n");
		puts("==================================================\n");
		puts("Usuario: ");
		scanf("%s", &usuario);
		puts("Senha: ");
		scanf("%s", &senha);
		
		
		
		if (!strcmp(usuario, "roger") &&
		    !strcmp(senha, "multivix")) {
		    	int op;
		    	puts("\n Usuario ou senha incorretos \n\n (1) Tentar Novamente \n (0) Sair \n");
		    	scanf("%i", &op);
		    	fflush(stdin);
		    	if (op == 1)
		    	    continue;
		        else if (op == 0) {
		        	ret = false;
				}
			} else {
				ret = true;
				break;
			}
	}
	
	return ret;
}

int opCadastro() {
	int ret = -1;
	while(ret == -1) {
		system("cls");
		puts("=====================================================\n");
		puts("                  Cadastro de Pessoas\n");
		puts("=====================================================\n");
		int op;
		puts("\n Selecione a opcao: \n (0) Sair \n (1) Cadastrar \n (2) Listar");
		scanf("%i", &ret);
		if (ret == 0 || ret == 1 || ret == 2)
		    break;
		}
		return ret;
}

int listar () {
	system("cls");
	puts("========================================================\n");
	puts("               Lista de Pessoas\n");
	puts("========================================================\n");
	
	puts("Nome ; Idade; Sexo; Endereco; \n");
	
	for (int i=0; i< qtdRegistros; i++) {
		printf("%s;%i;%c", pessoas[i].nome, pessoas[i].idade, pessoas[i].sexo);
	
	}
	
	system("pause");
	
}

void cadastrar() {
	system("cls");
	
	if (qtdRegistros >= 10) {
		puts("Qtd maxima de registros atingida");
		system("pause");
		return;
	}
	
	puts("==============================================================\n");
	puts("                     Cadastro de Pessoas\n");
	puts("==============================================================\n");
	
	puts("\n\nNome: ");
	gets(pessoas[qtdRegistros].nome); fflush(stdin);
	
	puts("\nIdade: ");
	scanf("%i", &pessoas[qtdRegistros].idade); fflush(stdin);
	puts("\nSexo: ");
	scanf("%c", &pessoas[qtdRegistros].sexo); fflush(stdin);
	
	puts("\n\nLogradouro:");
	gets(pessoas[qtdRegistros].end.logr); fflush(stdin);
	puts("\nBairro: ");
	gets(pessoas[qtdRegistros].end.bairro); fflush(stdin);
	puts("\nCidade: ");
	gets(pessoas[qtdRegistros].end.cidade); fflush(stdin);
	puts("\nUF: ");
	gets(pessoas[qtdRegistros].end.uf); fflush(stdin);
	
	puts("\n\nCadastro realizado com sucesso!");
	system("pause");
	
	qtdRegistros++;
	
	salvar();
}

int main(void) {
	//if (!login()) {
	//	return -1;
	//}
	carregar();
	int op = -1;
	while (op !=0);
		system("cls");
		op = opCadastro();
		
		if (op == 1) {
			cadastrar();
		} else if (op ==2) {
			listar();
		}
    }
    
    system("pause");
}

