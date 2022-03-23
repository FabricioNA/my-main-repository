/* Escreva um programa que leia um número e informe se ele é divisível por 10, por 5 ou por 2, ou se
não é divisível por nenhum deles. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int Num;
    printf ("Qual número que deseja verificar se é divisível por 10, 5 ou 2? \n");
    scanf ("%d", &Num);
    if (Num % 10 == 0 && Num % 5 == 0 && Num % 2 == 0) {
    	printf ("Seu número é divisível por 10, 5 e 2! \n"); }
    if (Num % 10 != 0 && Num % 5 != 0 && Num % 2 == 0) {
    	printf ("Seu número é divisível por 2! \n"); }
	if (Num % 10 != 0 && Num % 5 == 0 && Num % 2 != 0) {
    	printf ("Seu número é divisível por 5! \n"); }
	if (Num % 10 == 0 && Num % 5 != 0 && Num % 2 != 0) {
    	printf ("Seu número é divisível por 10! \n"); }		
}
