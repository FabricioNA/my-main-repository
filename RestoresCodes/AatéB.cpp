/* Desenvolva um programa que leia dois valores a e b ( a menor = b) e mostre os seguintes resultados:
a. Todos os n�meros no intervalo de a at� b
b. Todos os n�meros �mpares no intervalo de a at� b
c. Todos os n�meros primos no intervalo de a at� b */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int a, b, i, j, k, r;
    // Obten��o de Dados
    printf ("Digite o primeiro n�mero: \n");
    scanf ("%d", &a);
    printf ("Digite o segundo n�mero: \n");
    scanf ("%d", &b);
    // Todos os numeros
    if (a <= b ) {
    printf ("Todos os n�meros no intervalo criado: \n");
	for (i=a;i<=b;i++) {
		printf ("%d ", i);}
	// Todos n�meros �mpares
	printf ("\nTodos os n�meros �mpares no intervalo criado: \n");
	for (j=a;j<=b;j++) {
		if (j % 2 != 0) {
		printf ("%d ", j);}}
	// Todos os n�meros primos
	printf ("\nTodos os n�meros primos no intervalo criado: \n");
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
	printf ("O primeiro n�mero � maior que o segundo, portanto imposs�vel de compilar."); }
	system("pause");
	return (0);}
