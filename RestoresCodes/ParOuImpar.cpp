// Fa�a um programa que leia um n�mero inteiro maior que zero e informe se tal n�mero � par ou �mpar.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    
	int Num;
	
    printf (" Informe o n�mero que deseja verificar se � �mpar ou par: \n");
    scanf ("%d", &Num);

    if (Num > 0) {
        if (Num % 2 == 0) {
        	printf (" Seu n�mero � par \n"); } 
			else {
			printf (" Seu n�mero � �mpar \n"); }   
    } else {
        printf (" Seu n�mero n�o chega a nem ser um n�mero inteiro \n");
    }
    system ("pause");
    return 0;
}
