/* Fa�a um algoritmo que l� um valor n inteiro e positivo, e calcula e escreve o valor de S para a equa��o abaixo:
S=1+ 1/1!+1/2!+1/3!+?+1/n! */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Portuguese");
	int n, i;
	float f, r;
	// Obten��o dos valores
	printf ("Digite um n�mero inteiro e positivo: \n");
    scanf ("%d", &n);    
    // La�o que faz a fatorial e faz a formula de S e imprime o resultado
	for (r=1,i=1,f=1;i<=n;i++){
		f = f * i;
		r = r + 1 / f;
		printf ("Enquanto valor de n �: %d, S possui valor de: %f\n", i, r);
	}
	system("pause");
	return (0);
}
