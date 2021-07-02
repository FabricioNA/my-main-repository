/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 01/04/2021
Programa: Ler cinco e ordena-los 
Exercicio: Lista 01 / letra e
==========================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <string>
#include <iostream>
#define count 5

using namespace std;

int main(void){
    int array[count], i, j, k;
    srand(time(NULL));
    for (i = 0; i < count; i++){
        array[i] = rand() % 100;
    }
    for(i = 0 ; i < count ; i++){
        for(j = 0 ; j < count ; j++){
            if(array[i]<array[j]){
                k = array[i];
                array[i]=array[j];
                array[j] = k;
            }
        }
    }
    cout << "Numeros ordenados:" << endl;
    for (i = 0; i < count; i++){
        cout << array[i] << " ";
    }
system("pause");
}