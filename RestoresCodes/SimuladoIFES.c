/* Desenvolva um programa de perguntas e respostas, cada pergunta deve se repetir at� o usu�rio acertar,
quando o usu�rio acertar o programa passa para pr�xima pergunta at� acabar o jogo. Segue as perguntas abaixo:

A cada vez que uma pergunta se repetir, deve ser gerados novos valores aleat�rios de 0 a 99 em 2 vetores de 10 posi��es cada,
esses vetores devem ser exibidos junto com as perguntas.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
 
#include <time.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
	int Vet1[10], Vet2[10],SM[10];
	int r1p, r2p, rt=0, m, qtd, qtd2, qtdt, i;
	srand(time(NULL));
// Gerando os dois vetores aleat�rios iguais e impressos
	for (i=0;i<10;i++){
        Vet1[i] = rand()%100;
        Vet2[i] = rand()%100;
        printf ("%d|%d  %d|%d \n",i,Vet1[i], Vet2[i],i);}
// Criando condi��o para primeira pergunta
	for (m=0,i=0;i<10;i++){
    SM[i] = Vet1[i] + Vet2[i];
        if (SM[i]>m){
        m = SM[i];
        }
     }
    printf("Qual � a posi��o onde h� o maior valor somado entre as mesmas posi��es entre os 2 vetores?\n");
    printf("R.: %d\n",m);
    scanf ("%i",&r1p);
    if (r1p == m){
    // Criando condi��o para segunda pergunta
        for (qtd=0,qtd2=0,i=0;i<10;i++){
            if (Vet1[i]>= 20 && Vet1[i] <=70){
            qtd +=1;
            }
            if (Vet2[i]>= 20 && Vet2[i] <=70){
            qtd2 +=1;
            }
        }
        qtdt = qtd + qtd2;
        printf("Quantos valores est�o na faixa entre 20 � 70 nos 2 vetores?\n");
        printf("R.: %d\n",qtdt);
        scanf("%i", &r2p);
        if (r2p != qtdt ){
            rt += 1;
        }
    }
    else{
        rt = 1;
        for (qtd=0,qtd2=0,i=0;i<10;i++){
            if (Vet1[i]>= 20 && Vet1[i] <=70){
            qtd +=1;
            }
            if (Vet2[i]>= 20 && Vet2[i] <=70){
            qtd2 +=1;
            }
        }
        qtdt = qtd + qtd2;
        printf("Quantos valores est�o na faixa entre 20 � 70 nos 2 vetores?\n");
        printf("R.: %d\n",qtdt);
        scanf("%i", &r2p);
        if (r2p != qtdt ){
            rt += 1;
        }
    }
    switch (rt){
    case 0:
        printf("Parab�ns voc� domina bem os n�meros!");
        break;
    case 1:
        printf ("At� que voc� � bom com n�meros!");
        break;
    case 2:
        printf("Voc� deve estudar mais!");
        break;
    }
    system("pause");
	return (0);
}
