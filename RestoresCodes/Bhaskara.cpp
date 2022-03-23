// Objetivo: fazer um sistema que resolva a fórmula de Bhaskara
// Bibliotecas
#include <stdio.h> // printf
#include <stdlib.h> // void
#include <math.h> // sqrt
// Principal
int main () {
	// Variáveis
	int a, b, c, x1, x2, pow, delta;
	// Obtenção de Dados
	printf ("Qual o coeficiente de a? \n");
	scanf ("%d", &a);
	printf ("Qual o coeficiente de b? \n");
	scanf ("%d", &b);
	printf ("Qual o coeficiente de c? \n");
	scanf ("%d", &c);
	// Contas
	pow = (b*b) - (4*a*c);
	delta = sqrt (pow);
	x1 = (-b +delta) / (2*a);
	x2 = (-b -delta) / (2*a);
	// Imprimir e Pausar
	printf ("A primeira raiz vale: %d, e a segunda %d. \n\a", x1, x2);
	system ("pause");
	// Retornar
	return (0);
}
