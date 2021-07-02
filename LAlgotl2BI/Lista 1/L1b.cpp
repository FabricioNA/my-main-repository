/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 30/03/2021
Programa: Par e Impar
Exercicio: Lista 01 / letra b
==========================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <string>
#include <iostream>
#define count 5

using namespace std;

int main(void) {
// declaração das variaveis
    int arrayAll[count], arrayParF[count], arrayImparF[count], i;
// Preencher vetor base e em seguida passar com condiçao par e impar para os vetores respectivos
    for ( i = 0; i < count; i++){
        system("cls");
        cout << "Digite 5 numeros: " << endl;
        cin >> arrayAll[i];
    }
    system("cls");
    for ( i = 0; i < count; i++){
        if (arrayAll[i] % 2 == 0){
            arrayParF[i] = arrayAll[i];
        }
        else{
            arrayParF[i] = 0;
        }
    }
    for ( i = 0; i < count; i++){
        if (arrayAll[i] % 2 != 0){
            arrayImparF[i] = arrayAll[i];
        }
        else{
            arrayImparF[i] = 0;
        }
    }
// imprimir tudo
    cout << "Par:" << endl;
    for ( i = 0; i < count; i++){
        if (arrayParF[i] != 0){
            cout << arrayParF[i] << " "; 
        }
    }
    cout << endl << "Impar:" << endl;
    for ( i = 0; i < count; i++){
        if (arrayImparF[i] != 0){
            cout << arrayImparF[i] << " "; 
        }
    }
    cout << endl;
system("pause");
}