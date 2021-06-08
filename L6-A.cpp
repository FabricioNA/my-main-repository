
/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 04/06/2021
Programa: 10000 numeros
Exercicio: Lista 06 - A
==========================================================*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX = 10000;
int vet[MAX];

int random_number(int min_num, int max_num) {
	int result = 0, low_num = 0, hi_num = 0;
	
	if (min_num < max_num) {
		low_num = min_num;
		hi_num = max_num + 1; // include max_num in output
	} else {
		low_num = max_num + 1; // include max_num in output
		hi_num = min_num;
	}
	
	result = (rand() % (hi_num - low_num)) + low_num;
	return result;
}

int existe(int num) {
	for(int i=0;i<MAX;i++) {
		if(vet[i] == num)
		return 1;
	}
	return -1;
}

int gerarNumero(int i) {
	while(true) {
		int num = random_number(1, MAX);
		if (existe(num) == -1) {
			vet[i] = num;
			break;
		}
	}
}

void preencher () {
	for (int i=0;i<MAX;i++) {
		vet[i] = -1;
	}
	for (int i=0; i<MAX; i++) {
		gerarNumero(i);
	}
}

void salvarArquivo() {
	FILE *arquivo = fopen("vetor10000.txt", "w");
	for (int i=0;i<MAX;i++) {
		fprintf(arquivo, "%i\n", vet[i]);
	}
	fclose(arquivo);
}

int main (void ) {
	srand(time(NULL));
	preencher();
	salvarArquivo();

} 

