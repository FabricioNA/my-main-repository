/* Chico tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metro e cresce 3 cent�metros por ano. 
Construa um programa que calcule e imprima quantos anos ser�o necess�rios para que Z� seja maior que Chico. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Portuguese");
	float chico = 1.50, ze = 1.10;
	int anos;
	for (anos=0;;anos++){
		chico= chico + 0.02;
		ze= ze + 0.03;
		if (ze>chico){
			break;
		}
	}			
		printf ("Chico = %.1f\n Z� = %.1f\n e anos = %d\n",chico,ze,anos);
	system("pause");
	return(0);
	}
	
