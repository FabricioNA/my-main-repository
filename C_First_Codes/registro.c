/* CABE�ALHO
   Programa: Tratamento de registro
   Arquivo: registro.c
   Objetivo: Apresentar o tratamento b�sico de um registro
   Autor(a): Adan Lucio Pereira 
   Vers�o: 1.0    ] */

/* Importa��o de Bibliotecas */
#include <stdio.h>
#include <conio.h>

/* Declara��o da estrutura de aluno, j� com a sua renomea��o */
typedef struct Aluno {
   int idade;
   int matr;
   float coef;
   int periodo;
} tAluno;

/* Fun��o principal */
int main() {
   /* Declara��o de vari�veis
      Notar as diferentes formas de se declarar vari�veis do mesmo tipo
      de registro */
   struct Aluno aluno1;
   tAluno alunoAux1, alunoAux2;

   /* ENTRADA */
   /* Solicita��o dos dados de um aluno */
   printf("Informe os dados de um aluno\n");
   printf("Idade: ");
   scanf("%d",&aluno1.idade);
   printf("Matricula: ");
   scanf("%d",&aluno1.matr);
   printf("Coeficiente: ");
   scanf("%f",&aluno1.coef);
   printf("Periodo: ");
   scanf("%d",&aluno1.periodo);

   /* PROCESSAMENTO */
   /* Diferentes formas de se fazer atribui��o de vari�veis, cujo
      tipo sejam estruturas
      Forma 1 - Atribui��o direta da estrutura completa */
   alunoAux1 = aluno1;

   /* Forma 2 - atribui��o campo a campo */
   alunoAux2.idade = aluno1.idade;
   alunoAux2.matr = aluno1.matr;
   alunoAux2.coef = aluno1.coef;
   alunoAux2.periodo = aluno1.periodo;

   /* SA�DA */
   /* Imprimir registros de aluno, a fim de verificar se todos est�o
      com os mesmos valores */
   printf("\n\nIMPRESSAO DE REGISTROS DE ALUNOS \n\n");
   printf("aluno1 - Idade: %d. Matricula: %d. Coeficiente: %f. Periodo: %d\n",
          aluno1.idade, aluno1.matr, aluno1.coef, aluno1.periodo);
   printf("alunoAux1 - Idade: %d. Matricula: %d. Coeficiente: %f. Periodo: %d\n",
          alunoAux1.idade, alunoAux1.matr, alunoAux1.coef, alunoAux1.periodo);
   printf("alunoAux2 - Idade: %d. Matricula: %d. Coeficiente: %f. Periodo: %d\n",
          alunoAux2.idade, alunoAux2.matr, alunoAux2.coef, alunoAux2.periodo);

   getch();
   return 1;
}
