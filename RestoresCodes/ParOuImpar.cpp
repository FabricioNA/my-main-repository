// Faça um programa que leia um número inteiro maior que zero e informe se tal número é par ou ímpar.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    
	int Num;
	
    printf (" Informe o número que deseja verificar se é ímpar ou par: \n");
    scanf ("%d", &Num);

    if (Num > 0) {
        if (Num % 2 == 0) {
        	printf (" Seu número é par \n"); } 
			else {
			printf (" Seu número é ímpar \n"); }   
    } else {
        printf (" Seu número não chega a nem ser um número inteiro \n");
    }
    system ("pause");
    return 0;
}
