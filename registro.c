/* CABEÇALHO
   Programa: Tratamento de registro
   Arquivo: registro.c
   Objetivo: Apresentar o tratamento básico de um registro
   Autor(a): Adan Lucio Pereira 
   Versão: 1.0    ] */

/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>

/* Declaração da estrutura de aluno, já com a sua renomeação */
typedef struct Aluno {
   int idade;
   int matr;
   float coef;
   int periodo;
} tAluno;

/* Função principal */
int main() {
   /* Declaração de variáveis
      Notar as diferentes formas de se declarar variáveis do mesmo tipo
      de registro */
   struct Aluno aluno1;
   tAluno alunoAux1, alunoAux2;

   /* ENTRADA */
   /* Solicitação dos dados de um aluno */
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
   /* Diferentes formas de se fazer atribuição de variáveis, cujo
      tipo sejam estruturas
      Forma 1 - Atribuição direta da estrutura completa */
   alunoAux1 = aluno1;

   /* Forma 2 - atribuição campo a campo */
   alunoAux2.idade = aluno1.idade;
   alunoAux2.matr = aluno1.matr;
   alunoAux2.coef = aluno1.coef;
   alunoAux2.periodo = aluno1.periodo;

   /* SAÍDA */
   /* Imprimir registros de aluno, a fim de verificar se todos estão
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
