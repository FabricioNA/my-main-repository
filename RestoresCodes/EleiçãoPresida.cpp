#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int i, vote, vot[7];
	//Zerar o array
	for (i=1;i<=6;i++){
		vot[i]=0;
	}
	// Laço que obtem todos os votos e soma-os em sua lacuna, e quebra quando 0
	for (i=0,vote=0;;i++){
	system("cls");
	printf ("********************ELEIÇÃO PRESIDENCIAL**********************\n");
	printf ("**************SEU VOTO É EXTRITAMENTE SECRETO*****************\n");
	printf ("*******************CANDIDATOS: 1, 2, 3, 4*********************\n");
	printf ("***************VOTO NULO: 5 E VOTO EM BRANCO: 6***************\n");
	printf ("****************PARA FINALIZAR A CONTAGEM: 0******************\n");
	printf ("*******************DIGITE ABAIXO SEU VOTO:********************\n");
	scanf ("%d", &vote);
		if (vote==0){
			printf ("Realizando contagem...\n\a");
			system("pause");
			break;
		}
		if (vote<=6){
			printf ("Seu voto foi computado com sucesso! Agora dê lugar ao próximo!\n");
			system("pause");
		}
		if (vote>6){
			printf ("Seu voto é inválido, digite um voto entre os possíveis acima citados.\n");
			system("pause");
		}
	vot[vote] += 1;
	}
	// Imprimir o resultado
	for (i=1;i<=6;i++){
		if (i<=4){
			printf("O candidato %d teve o total de votos em: %d de voto(s)\n", i, vot[i]);
		}
		if (i==5){
			printf ("A quantidade de votos nulos foi de: %d voto(s)\n", vot[i]);
		}
		if (i==6){
			printf ("A quantidade de votos brancos foi de: %d voto(s)\n", vot[i]);
		}
	}
	system("pause");
	return (0);
}
