/* ==========================================================
Aluno: Erika, Fabricio, Lailson, Roger
Data: 08/06/2021
Programa: Manipula��o de Arquivos
Exercicio: Lista 06 letra c
========================================================== */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

struct TAluno {
	char tpReg[3];
	char contador[3];
	char matricula[10];
    char nome [50];
    char dataNascimento[10];
};

struct TAluno alunos [20];

void carregar() {
	FILE *arq = fopen("ARQ01.txt", "r");
	if (arq == NULL) {
		fclose(arq);
		return;
	}
	
	int contalinha=0;
	while(!feof(arq)) {
		char linha [200];
		fgets(linha, 200, arq);
		
		if (strlen(linha)==0)continue;
		string strlinha;
		strlinha.clear();
		strlinha.append(linha);
		
		strcpy(alunos[contalinha].tpReg,strlinha.substr(0, 3).c_str());
		if (strcmp(alunos[contalinha].tpReg, "002")== -1)continue;
		
		strcpy(alunos[contalinha].contador, strlinha.substr(4, 6).c_str());
		strcpy(alunos[contalinha].matricula, strlinha.substr(7, 17).c_str());
		strcpy(alunos[contalinha].nome, strlinha.substr(17, 66).c_str());
		strcpy(alunos[contalinha].dataNascimento, strlinha.substr(67, 76).c_str());
		contalinha++;
	}
	fclose(arq);
}

string ajusta (char valor[], int tam) {
	string strValor(valor);
	return strValor.substr(0, tam);
} 

void salvar() {
	FILE *arq = fopen("ARQ01.CSV", "w");
	for (int i = 0; i < 20; i++) {
		fprintf(arq,"%s;%s;%s;%s;\n", ajusta(alunos[i].contador, 3).c_str(), ajusta(alunos[i].matricula, 7).c_str(), ajusta(alunos[i].nome, 26).c_str(), ajusta(alunos[i].dataNascimento, 10).c_str());
	}
	fclose(arq);
}  

int main(void) {
	carregar();
	salvar();
};


