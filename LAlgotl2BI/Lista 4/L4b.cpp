/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 15/04/2021
Programa: B
Exercicio: Lista 04 / letra b
==========================================================*/

#include <stdio.h>
#include <cstdlib>

const int MAX = 10;

int minhafuncao(int i);	

int main() {
	int total = minhafuncao(0);
	printf("%i", total);
	}

int minhafuncao(int i){
		if(i == MAX){
			return 0;
		}
	return (i % 2) * 9 + 13 + minhafuncao(i+1);			
	}
	