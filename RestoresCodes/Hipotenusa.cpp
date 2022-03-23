// Objetivo: fazer um sistema que resolva a hipotenusa
// Bibliotecas
#include <stdio.h> // printf
#include <stdlib.h> // void
#include <math.h> // sqrt
// Principal
int main () {
	// Variáveis
	float a, b, ab, r;
	// Obtenção de Dados
	printf ("Qual o valor do primeiro cateto? \n");
	scanf ("%f", &a);
	printf ("Qual o valor do segundo cateto? \n");
	scanf ("%f", &b);
	// Processamento
	ab = (a*a) + (b*b);
	r = sqrt (ab);
	// Imprimir
	printf ("A hipotenusa vale: %.1f \n", r);
	// Pausar e Return
	system ("pause");
	return 0;
}
// Explicação: é incluso as bibliotecas, ja uso essas 3 por padrao no momento, abre a principal, é declarado as variaveis, e é pedido os valores dos catetos e salvos em sua variaveis com o uso de %f e &
// Logo após é feito os calculo, multiplicando a propria variavel por ela mesma, seria o mesmo que tirar a sua potencia ao quadradro, dessa forma é efeito isso nos 
// dois elementos e somados e armazenado numa variavel existente pra ser o resultado, depois é tirado a raiz desse número gerado e impresso para o usuario, o sistema pausa para ele ler e return 0 como protocolo.
 
