/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 27/03/2021
Programa: Dos três, o maior
Exercicio: Lista 01 / letra a
==========================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <string>
#include <iostream>
#define count 3

using namespace std;

int main(void){
    int array[count], max = 0, i;
    // preencher
    for (i = 0; i < count; i++){
        cout << "Digite tres numeros inteiros distintos:" << endl;
        cin >> array[i];
        system("cls");
    }
    // verificar o maior
    for (i = 0; i < count; i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    // imprimir tudo
    cout << "Os numeros computados:" << endl;
    for (i = 0; i < count; i++){
        cout << array[i] << endl;
    }
    cout << "Dentre os numeros, o maior: " << max << endl;
system("pause");
}