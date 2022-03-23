/* Desenvolva um programa que leia dois valores a e b ( a menor = b) e mostre os seguintes resultados:
a. Todos os números no intervalo de a até b
b. Todos os números ímpares no intervalo de a até b
c. Todos os números primos no intervalo de a até b */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int a, b, i, j, k, r;
    // Obtenção de Dados
    printf ("Digite o primeiro número: \n");
    scanf ("%d", &a);
    printf ("Digite o segundo número: \n");
    scanf ("%d", &b);
    // Todos os numeros
    if (a <= b ) {
    printf ("Todos os números no intervalo criado: \n");
	for (i=a;i<=b;i++) {
		printf ("%d ", i);}
	// Todos números ímpares
	printf ("\nTodos os números ímpares no intervalo criado: \n");
	for (j=a;j<=b;j++) {
		if (j % 2 != 0) {
		printf ("%d ", j);}}
	// Todos os números primos
	printf ("\nTodos os números primos no intervalo criado: \n");
	for (k=a;k<=b;k++) {
		for (r=0,j=2; j<=k/2; j++) {
			if (k%j==0) {
			r++;
			break;
			}
		}	
	if (r == 0)	
		printf ("%d ", k);
	}		
}
	else {
	printf ("O primeiro número é maior que o segundo, portanto impossível de compilar."); }
	system("pause");
	return (0);}
