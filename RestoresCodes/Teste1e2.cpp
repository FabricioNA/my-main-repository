/* Faça um algoritmo que leia 10 valores inteiros armazenando-os em um vetor teste1. 
Construa um vetor adicional (teste2) de 10 posições, formado a partir da seguinte regra: 
se o valor do índice for par, o valor do elemento deve ser igual ao elemento equivalente de teste1 multiplicado por 5; 
se for ímpar, deverá ser somado com 5. Ao final, mostrar o conteúdo dos dois vetores. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define n 10
int main () {
    setlocale(LC_ALL, "Portuguese");
	int teste1[n], teste2[n], i;
	// Obtenção dos valores
	for (i=0;i<n;i++){
		printf ("Digite o valor desejado há ser alocado no setor %d do teste1\n", i+1);
		scanf ("%d", &teste1[i]);
	}
	// Adaptação de condição para o teste2
	for (i=0;i<n;i++){
		if (teste1[i] % 2 == 0) {
			teste2[i] = teste1[i] * 5;
		}
		else {
			teste2[i] = teste1[i] + 5;
		}
	}
	// Imprimir as duas arrays
	for (i=0;i<n;i++){
		printf ("Valor no setor %d do teste1 é de : %d\n", i+1, teste1[i]);
	}
	for (i=0;i<n;i++){
		printf ("Valor no setor %d do teste2 é de : %d\n", i+1, teste2[i]);
	}
	system("pause");
	return (0);}
