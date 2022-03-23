// Objetivo: Fazer um sistema que calculo divisão proporcional
// Bibliotecas:
#include <stdio.h> // printf
#include <stdlib.h> // void
#include <math.h> // sqrt
// Principal
int main () {
	// Variáveis
	float gain, part1, part2, part3, ppi, piece1, piece2, piece3; // ppi= Prêmio Por Investimento
	// Obtenção de Dados
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
	// é incluso as bibliotecas usadas no sistema, é aberto a principal, declaro todas as variaveis que serao usadas (loat gain, part1, part2, part3, ppi, piece1, piece2, piece3), é pedido ao usuarios os dados
	// que serao usados nos codigos e salvos em sua variaveis com o uso do %f e alocando com & respectivamente, como qual valor do premio e quanto cada pessoa apostou na bolada. Dessa forma, parte para 
	// os calculos, na qual, a divisao proporcional é feita com um valor produto da divisao do valor premiado com a soma de tudo que foi investido por eles,
	// com essa constante, é multiplicado com o numero inicial do que foi investido por cada um. Assim, resulta o quanto cada um recebera proporcionalmente
	// e o que nos resta é imprimir para o usuario isso, na qual, é usado o %.2f para nao poluir de 0s a visão do usuario. O sistema é pausado para que ele possa
	// ler e return 0 como protocolo.
