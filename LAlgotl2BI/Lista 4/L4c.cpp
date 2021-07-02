/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 28/04/2021
Programa: C
Exercicio: Lista 04 / letra c
==========================================================*/

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string.h>

int totalNum3 = 0; 

void contarNumero (int num);

int main (void){
	for (int num =999; num <= 15000; num++) {
		std::stringstream tmp;
		tmp << num;	
		char const *num_char = tmp.str().c_str();	
		for (int i=0; i< strlen(num_char); i++) {	
			if (num_char[i] == '3') {
				totalNum3++;
			}
		}
	}
	printf("A quantidade de numeros 3 entre 999 a 15000 eh:\n");
	printf ("%i", totalNum3);	
}

	void contarNumero (int num) {
	if (num < 15000)
	return;
	
	std::stringstream tmp;
	tmp << num;	
	char const *num_char = tmp.str().c_str();
	for (int i=0; i< strlen(num_char); i++){
		if (num_char[i] == '3') {
			totalNum3++;
		}
	}	
	contarNumero (num+1);
}		
	
		
		
		
	

	
	

	
	
