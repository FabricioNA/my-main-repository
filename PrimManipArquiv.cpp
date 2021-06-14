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
int vetor[MAX], i = 0;

void read_txt_imput_array(){
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

int main() {
    //char *name = (char *) malloc(sizeof(char)+1);
	int number;
	while (true){
		system("cls");
		read_txt_imput_array();
		cout << "Qual numero voce gostaria de encontrar? (para sair digite -1)  " << endl;
		cin >> number; 
		if (number == -1){
			cout << "Numero chave para saida digitado. fechando...";
			break;
   		}	
		cout << "Seu numero se encontra no vetor desordenado, na casa: " << where_number_binary(number, 0, MAX) << endl;
		if (where_number_binary(number, 0, MAX) == -1){
			cout << "Numero nao encontrado no vetor" << endl;
   		}	
		system("pause");
		quickSort(0, MAX);
		cout << "Porem no vetor ordenado esta em: " << where_number_binary(number, 0, MAX) << endl;
		if (where_number_binary(number, 0, MAX) == -1){
			cout << "Numero nao encontrado no vetor" << endl;
   		}
		system("pause");
	}
return EXIT_SUCCESS;
}