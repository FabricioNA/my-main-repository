// Objetivo: Criar sistema que calcula a m�dio dos elementos.
// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
// Principal
int main () {
	// Vari�veis
	float Num1, Num2, Soma, Media;
	// Obten��o de Dados
	printf ("Qual e o primeiro numero? \n");
	scanf ("%f", &Num1);
	printf ("Qual e o segundo numero? \n");
	scanf ("%f", &Num2);
	// Contas
	Soma= Num1 + Num2;
	Media = Soma / 2;
	// Imprimir
	printf ("Ou seja, sua media equivale a %.1f \n\a", Media);
	// Pausar
	system ("pause");
	// Retornar
	return 0;
}
