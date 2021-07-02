#include <stdio.h>
#include <cstdlib>
#include <time.h>
#define MAX 100

int vet [MAX];

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

int main (void){
	preencher (0);
	for (int i = 0; i < MAX; i++) {
		printf("\n%i", vet [i]);		
	}
	
	int soma = somar (0);
	
	printf ("\n\n Somatorio eh: %i",soma);
	

}