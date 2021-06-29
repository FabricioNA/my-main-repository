#include <iostream>
#include <stdio.h>
#define MAX 10000

void cl_buffer(void){
    char aux;
    while ((aux = getchar()) != '\n' && aux != EOF);
}

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

int vetor[MAX];

void read_txt_imput_array(){
    int i= 0;
	FILE *arquivo; 
    arquivo = fopen ("vetor10000.txt", "r");
    while(!feof(arquivo)){
        fscanf(arquivo, "%i\n", &vetor[i]); 
  	    i++;
    }
fclose(arquivo);
}

void quickSort(int inicio, int final) { //ordena vetor
	int i, j, pivo, aux;
	i = inicio;
	j = final-1;
	pivo = vetor[(inicio + final) / 2];
	while(i <= j) {
		while(vetor[i] < pivo && i < final) {
			i++;
		}
		while(vetor[j] > pivo && j > inicio) {
			j--;
		}
		if(i <= j) {
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i++;
			j--;
		}
	}
	if(j > inicio)
		quickSort(inicio, j+1);
	if(i < final)
		quickSort(i, final);
}

int where_number_binary(int elemento, int limEsq, int limDir) { // vetor ordenado
	int meio = (limEsq + limDir)/2;
	if (vetor[meio] == elemento)
		return meio;
	if (limEsq >= limDir)
		return -1; 
	else if (vetor[meio] < elemento)
		return where_number_binary(elemento, meio+1, limDir);
	else
		return where_number_binary(elemento, limEsq, meio-1);
}