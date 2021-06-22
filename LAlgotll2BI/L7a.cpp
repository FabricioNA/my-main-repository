/* ==========================================================
Aluno: Erika, Fabricio, Lailson, Roger
Data: 08/06/2021
Programa: Busca e ordenação
Exercicio: Lista 07 – letra a
========================================================== */
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stdio.h> 

using namespace std;

const int MAX = 10000;
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

void quickSort(int inicio, int final) {
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

int where_number_binary(int elemento, int limEsq, int limDir) {
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

int show_where_number_binary(int elemento, int limEsq, int limDir) {
	int meio = (limEsq + limDir)/2;
	cout << "Procurando..." << endl;
	if (vetor[meio] == elemento)
		return meio;
	if (limEsq >= limDir)
		return -1; 
	else if (vetor[meio] < elemento)
		return where_number_binary(elemento, meio+1, limDir);
	else
		return where_number_binary(elemento, limEsq, meio-1);
}

int where_number_sequential(int elemento) {
	for (int i = 0; i < MAX; i++) {
		if (vetor[i] == elemento){
			return i;
		}
	}
	return -1;
}

int show_where_number_sequential(int elemento) {
	for (int i = 0; i < MAX; i++) {
		cout << "Procurando... ";
		if (vetor[i] == elemento){
			return i;
		}
	}
	return -1;
}

int main() {
    //char *name = (char *) malloc(sizeof(char)+1);
	int number;
	while (true){
		system("cls");
		read_txt_imput_array();

		cout << "Qual numero voce gostaria de encontrar? MAX 10000 (para sair digite -1)  " << endl;
		cin >> number; 
		if (number == -1){
			cout << "Numero chave para saida digitado. fechando...";
			return EXIT_FAILURE;
   		}
		if (number > MAX){
			cout << "Numero maior que o maximo delimitado. fechando...";
			return EXIT_FAILURE;
   		} 
		   
		cout << "Buscando desordenado usando sequencial... " << endl;
		show_where_number_sequential(number);
		cout << endl << "Numero encontrado na posicao: " << where_number_sequential(number) << endl;
		system("pause");

		quickSort(0, MAX);

		cout << "Porem ordenado usando binario... " << endl;
		show_where_number_binary(number, 0, MAX);
		cout << "Numero encontrado na posicao: " << where_number_binary(number,0,MAX) << endl;
		system("pause");
	}
return EXIT_SUCCESS;
}