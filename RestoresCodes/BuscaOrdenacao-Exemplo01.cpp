#include <stdio.h>

int tamVetor = 10;
int vetor[] = { 9, 7, 5, 4, 1, 8, 6, 3, 2, 0 };

void insertionSort() {

    for (int i = 1; i < tamVetor; i++) {
		int item = vetor[i];
		int j = i - 1;
		
		while ((j >= 0) && (vetor[j] > item)) {
			vetor[j + 1] = vetor[j];
			j--;
		}
		
		vetor[j + 1] = item;
	}
}
void selectionSort() { 
	int aux, min;
	for (int i = 0; i < (tamVetor-1); i++) {
		min = i;
		for (int j = (i+1); j < tamVetor; j++) {
			if(vetor[j] < vetor[min]) 
				min = j;
		}
		if (i != min) {
			aux = vetor[i];
			vetor[i] = vetor[min];
			vetor[min] = aux;
		}
	}
}
void bubbleSort(int posicao){ 
    if (posicao < 1)return; 
 
    for (int i=0; i< posicao; i++) {
        if (vetor[i] > vetor[i+1]) {
        	int temp = vetor[i];
		    vetor[i] = vetor[i+1];
		    vetor[i+1] = temp; 
		}
	}
    bubbleSort(posicao-1); 
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
void heapSort(int n) {
   int i = n / 2, pai, filho, t;
   while(true) {
      if (i > 0) {
          i--;
          t = vetor[i];
      } else {
          n--;
          if (n <= 0) return;
          t = vetor[n];
          vetor[n] = vetor[0];
      }
      pai = i;
      filho = i * 2 + 1;
      while (filho < n) {
          if ((filho + 1 < n)  &&  (vetor[filho + 1] > vetor[filho]))
              filho++;
          if (vetor[filho] > t) {
             vetor[pai] = vetor[filho];
             pai = filho;
             filho = pai * 2 + 1;
          } else {
             break;
          }
      }
      vetor[pai] = t;
   }
}

int buscaSequencial(int elemento) {
	for (int i = 0; i < tamVetor; i++) {
		if (vetor[i] == elemento)
			return i;
	}
	return -1;
}
int buscaBinaria(int elemento, int limEsq, int limDir) {
	int meio = (limEsq + limDir)/2;
	if (vetor[meio] == elemento)
		return meio;
	if (limEsq >= limDir)
		return -1; // não encontrado
	else if (vetor[meio] < elemento)
		return buscaBinaria(elemento, meio+1, limDir);
	else
		return buscaBinaria(elemento, limEsq, meio-1);
}

int main(void) {

	for(int i=0; i< tamVetor; i++) {
		printf("%i\n", vetor[i]);
	}

	puts("Pos ordenacao\n\n");
    //insertionSort();
    //selectionSort();
    //bubbleSort(tamVetor-1);
    //quickSort(0, 9);
    heapSort(10);
	for(int i=0; i< tamVetor; i++) {
		printf("%i\n", vetor[i]);
	}
	
}
