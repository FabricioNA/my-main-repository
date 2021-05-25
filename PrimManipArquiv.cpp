#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>

using namespace std;

const int MAX = 10;
int vetor[MAX];

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
        if (vetor[i] == num)
            return 1;
    }
    return -1;
}

int gerarNumero(int number) {
    while(true) {
        int numero = random_number(1, MAX);
        if (existe(numero) == -1) {
            vetor[number] = numero;
            break;
        }
    }
}

void preencher() {
    for (int i=0;i<MAX;i++) {
        vetor[i] = -1;
    }
    for (int i=0; i<MAX; i++) {
        gerarNumero(i);
    }
}

void apresentar() { 
    puts(">>>>>>>>>>>>>>>>> Apresentar");
    for(int i=0; i<MAX; i++) {
        printf("  %i\n", vetor[i]);
    }
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

void apresentarEmOrdem() { 
    int valor = -1, vlAnt = -1;

    puts(">>>>>>>>>>>>>>>>> Apresentar");
    for(int i=0; i<MAX; i++) {
        for (int j = 0; i < MAX; j++){
            if ((vetor[j] < valor || valor == -1) && vetor[j] > valor){
                    valor = vetor[j];
            }  
        }
    vlAnt = valor;
    cout << valor;
    }
}

int main() {
    //char *name = (char *) malloc(sizeof(char)+1);
    srand(time(NULL));
    preencher();
    quickSort(0, MAX);
    apresentar();
return EXIT_SUCCESS;
}