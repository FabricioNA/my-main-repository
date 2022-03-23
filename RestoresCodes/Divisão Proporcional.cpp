// Objetivo: Fazer um sistema que calculo divis�o proporcional
// Bibliotecas:
#include <stdio.h> // printf
#include <stdlib.h> // void
#include <math.h> // sqrt
// Principal
int main () {
	// Vari�veis
	float gain, part1, part2, part3, ppi, piece1, piece2, piece3; // ppi= Pr�mio Por Investimento
	// Obten��o de Dados
	printf ("Qual o valor do premio? \n");
	scanf ("%f", &gain);
	printf ("Quanto o primeiro apostou? \n");
	scanf ("%f", &part1);
	printf ("Quanto o segundo apostou? \n");
	scanf ("%f", &part2);
	printf ("Quanto o terceiro apostou? \n");
	scanf ("%f", &part3);
	// Processamento
	ppi = gain / (part1 + part2 + part3);
	piece1 = part1*ppi;
	piece2 = part2*ppi;
	piece3 = part3*ppi;
	// Imprimir e Pausar
	printf ("Do total de %.2f, o primeiro recebera proporcinalmente %.2f, o segundo %.2f, e o terceiro %.2f. \n\a", gain, piece1, piece2, piece3);
	system ("pause");
	// Retornar
	return (0);
	}
	// � incluso as bibliotecas usadas no sistema, � aberto a principal, declaro todas as variaveis que serao usadas (loat gain, part1, part2, part3, ppi, piece1, piece2, piece3), � pedido ao usuarios os dados
	// que serao usados nos codigos e salvos em sua variaveis com o uso do %f e alocando com & respectivamente, como qual valor do premio e quanto cada pessoa apostou na bolada. Dessa forma, parte para 
	// os calculos, na qual, a divisao proporcional � feita com um valor produto da divisao do valor premiado com a soma de tudo que foi investido por eles,
	// com essa constante, � multiplicado com o numero inicial do que foi investido por cada um. Assim, resulta o quanto cada um recebera proporcionalmente
	// e o que nos resta � imprimir para o usuario isso, na qual, � usado o %.2f para nao poluir de 0s a vis�o do usuario. O sistema � pausado para que ele possa
	// ler e return 0 como protocolo.
