/* Ler um número inteiro, e verificar se o número corresponde a um mês válido no calendário e screver
o nome do mês, senão escrever uma mensagem ‘Mês Inválido’*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");

	int mounth;
	
	printf (" Informe o número que deseja verificar se é um mês válido: \n");
    scanf ("%d", &mounth);
    
    switch (mounth) {
    case 1 :
    printf (" Esse mês é Janeiro \n");
    break;
    
    case 2 :
    printf (" Esse mês é Fevereiro \n");
    break;
    
    case 3 :
    printf (" Esse mês é Março \n");
    break;
    
    case 4 :
    printf (" Esse mês é Abril \n");
    break;
    
    case 5 :
    printf (" Esse mês é Maio \n");
    break;
    
    case 6 :
    printf (" Esse mês é Junho \n");
    break;
    
    case 7 :
    printf (" Esse mês é Julho \n");
    break;
    
    case 8 :
    printf (" Esse mês é Agosto \n");
    break;
    
    case 9 :
    printf (" Esse mês é Setembro \n");
    break;
    
    case 10 :
    printf (" Esse mês é Outubro \n");
    break;
    
    case 11 :
    printf (" Esse mês é Novembro \n");
    break;
    
    case 12 :
    printf (" Esse mês é Dezembro\n");
    break;
    
    default :
    printf ("Mês inválido! \n"); }
    
    system ("pause");
    return 0;
}
