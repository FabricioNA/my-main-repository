/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 17/04/2021
Programa: A
Exercicio: Lista 04 / letra a
==========================================================*/

#include <stdio.h>
#include <cstdlib>
#include <time.h>
#define MAX 100

int vet[MAX];

void preencher (int pos);

int somar (int pos);

int main (void){
	printf("\n_ _ _ _ _ _ Numeros: _ _ _ _ _ _\n");
	preencher (0);
	for (int i = 0; i < MAX; i++) {
		printf("\n%i", vet [i]);		
	}
	
	int soma = somar (0);
	printf ("\n\n Somatorio eh: %i",soma);
}

void preencher (int pos) {
	if (pos == MAX)
		return ;
		
	vet [pos] = 1+rand () %9 ;
	preencher (pos+1);
	
}

int somar (int pos) {
	if (pos == MAX)
	return 0;
	return vet [pos] + somar (pos+1);
}
