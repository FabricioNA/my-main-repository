/* Ler um n�mero inteiro, e verificar se o n�mero corresponde a um m�s v�lido no calend�rio e screver
o nome do m�s, sen�o escrever uma mensagem �M�s Inv�lido�*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");

	int mounth;
	
	printf (" Informe o n�mero que deseja verificar se � um m�s v�lido: \n");
    scanf ("%d", &mounth);
    
    switch (mounth) {
    case 1 :
    printf (" Esse m�s � Janeiro \n");
    break;
    
    case 2 :
    printf (" Esse m�s � Fevereiro \n");
    break;
    
    case 3 :
    printf (" Esse m�s � Mar�o \n");
    break;
    
    case 4 :
    printf (" Esse m�s � Abril \n");
    break;
    
    case 5 :
    printf (" Esse m�s � Maio \n");
    break;
    
    case 6 :
    printf (" Esse m�s � Junho \n");
    break;
    
    case 7 :
    printf (" Esse m�s � Julho \n");
    break;
    
    case 8 :
    printf (" Esse m�s � Agosto \n");
    break;
    
    case 9 :
    printf (" Esse m�s � Setembro \n");
    break;
    
    case 10 :
    printf (" Esse m�s � Outubro \n");
    break;
    
    case 11 :
    printf (" Esse m�s � Novembro \n");
    break;
    
    case 12 :
    printf (" Esse m�s � Dezembro\n");
    break;
    
    default :
    printf ("M�s inv�lido! \n"); }
    
    system ("pause");
    return 0;
}
