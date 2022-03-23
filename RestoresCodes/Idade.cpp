// Objetivo: Fazer um sistema que calcula sua idade e avisa se pode tirar a carteira e se pode votar
// Bibliotecas:
#include <stdio.h> // printf
#include <stdlib.h> // void
#include <math.h> // sqrt
// Principal
int main () {
	// Variáveis
	int dayR, mouthR, yearR, dayG, mouthG, yearG, daysTC, daysTB, difdays, dayF, mouthF, yearF;
	// Obtenção de Dados
	printf ("Que dia estamos? R.: dd/mm/aaaa \n");
	scanf ("%d/%d/%d", &dayR, &mouthR, &yearR);
	printf ("Quando voce nasceu? R.: dd/mm/aaaa \n");
	scanf ("%d/%d/%d", &dayG, &mouthG, &yearG);
	// Processamento
	daysTC = dayR + (mouthR*30) + (yearR*365);
	daysTB = dayG + (mouthG*30) + (yearG*365);
	difdays = daysTC - daysTB;
	yearF = difdays / 365;
	mouthF = (difdays % 365) / 30;
	dayF = (difdays % 365) % 30;
	// Imprimir
	printf ("Voce tem %d anos, %d meses e %d dias vividos ate agora \n", yearF, mouthF, dayF);
	if (yearF >= 18) {
		printf ("E pode tirar a carteira de habilitacao alem de ser obrigado a votar \n");
	}
	if (yearF >= 16 && yearF < 18) {
		printf ("Ainda voce nao pode tirar a carteira de habilitacao mas pode votar se quiser \n");
	}
	if (yearF < 16) {
		printf ("Ainda voce nao pode nem tirar a carteira de habilitacao quanto menos votar \n");
	}
	// Pausar e Retornar
	system ("pause");
	return (0);
}
// Explicação: Bom, foi pedido no enunciado um sistema que calcula a idade da pessoa, e com isso se é possivel a pessoa poder tirar a carteira de habilitação e ter o direito de votar.
// Começo incluindo as bibliotecas, atualmente ja uso essas 3 por padrão, depois definindo as variaveis, na qual estou pondo tudo em ingles para me acostumar ao mercado, 
// R= Received G= Gived, TC= Total Currently, TB= Total Before, dif= diference, F= Final (dayR, mouthR, yearR, dayG, mouthG, yearG, daysTC, daysTB, difdays, dayF, mouthF, yearF). 
// Na obtenção de dados, eu faço o pedido ao usuario das datas de hoje e de quando o mesmo nasceu,e para que nao faça 6 pedidos de dados, eu peço em formato dd/mm/aaaa. 
// Com os dados inicia-se as contas, a ideia inicial é tranformar as duas datas em dias totais, fazer a diferença
// e após fazer o inverso para voltar ao ano, mes, e dia. Dessa forma somo os dias, com os meses multiplicados por 30 (tomei a liberdade de arredondar todos os meses para 30), mais o ano
// vezes 365. Resultando o total de dias das duas datas, faço a diferença pra gerar o total de dias da idade. Entao divido os dias por 365 para encontrar o ano, o resto dessa divisão divido
// por 30 gera os meses, e o resto dessa ultima divisao equivale os dias. Com a idade obtida, é impresso pro usuario ver sua idade, logo em seguida para confirmar se é possivel tirar a carteira
// de habilitação e se pode votar, é feito a condição dos anos, se maior igual a 18 pode tirar a carta e é obrigado a votar, depois maior igual a 16 e menor que 16, é facultativo votar mas nao
// pode tirar a cata, dessa forma o usso do && para só acontecer entre as condições, e por ultimo menor que 16, nao podendo fazer nenhum dos dois. Depois pause o sistema para dar tempo do usuario ler tudo
// e por fim o return 0 por protocolo.
