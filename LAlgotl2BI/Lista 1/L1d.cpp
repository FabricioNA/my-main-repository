/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 01/04/2021
Programa: Dos cinco aleatórios, o maior
Exercicio: Lista 01 / letra d
==========================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <string>
#include <iostream>
#define count 5

using namespace std;

int main(void)
{
    int array[count], max = 0, i;
    srand(time(NULL));
    // preencher aleatorio
    for (i = 0; i < count; i++){
        array[i] = rand() % 100;
    }
    // verificar o maior
    for (i = 0; i < count; i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    // imprimir tudo
    cout << "Vetor contem:\n";
    for (i = 0; i < count; i++){
        cout << array[i] << " ";
    }
    cout << endl << "Dentre os numeros, o maior: " << max << "\n";
    system("pause");
}