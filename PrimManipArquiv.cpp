/* ==========================================================
Aluno: Erika, Fabricio, Lailson
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

int where_number(int number_choosed){
    for (size_t i = 0; i < MAX; i++){
        if (vetor[i] == number_choosed){
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
	cout << "Qual numero voce gostaria de encontrar? (para sair digite -1)  " << endl;
	cin >> number; 
	if (number == -1){
		cout << "Numero chave para saida digitado. fechando...";
		break;
    }	
	cout << "Seu numero se encontra no vetor desordenado, na casa: " << where_number(number) << endl;\
	system("pause");
	for (size_t i = 0; i < MAX; i++){
		cout << vetor[i] << " " << vetor[i+1] << " " << vetor[i+2] << " " << vetor[i+3] << " " << vetor[i+4] << " " << vetor[i+5] << " " << vetor[i+6] << " " << vetor[i+7] << " " << vetor[i+8] << " " << vetor[i+9] << " " << vetor[i+10] << " " <<
		vetor[i+11] << " " << vetor[i+12] << " " << vetor[i+13] << " " << vetor[i+14] << " " << vetor[i+15] << " " << vetor[i+16] << " " << vetor[i+17] << " " << vetor[i+18] << " " << vetor[i+19] << " " << vetor[i+20] << endl;
		if (i + 20 == MAX){
			break;
		}	
	}
	system("pause");
	quickSort(0, MAX);
	cout << "Porem no vetor ordenado esta em: " << where_number(number) << endl;
	system("pause");
	for (size_t i = 0; i < MAX; i++){
		cout << vetor[i] << " " << vetor[i+1] << " " << vetor[i+2] << " " << vetor[i+3] << " " << vetor[i+4] << " " << vetor[i+5] << " " << vetor[i+6] << " " << vetor[i+7] << " " << vetor[i+8] << " " << vetor[i+9] << " " << vetor[i+10] << " " <<
		vetor[i+11] << " " << vetor[i+12] << " " << vetor[i+13] << " " << vetor[i+14] << " " << vetor[i+15] << " " << vetor[i+16] << " " << vetor[i+17] << " " << vetor[i+18] << " " << vetor[i+19] << " " << vetor[i+20] << endl;
		if (i + 20 == MAX){
			break;
		}	
	}
	system("pause");
	}
return EXIT_SUCCESS;
}