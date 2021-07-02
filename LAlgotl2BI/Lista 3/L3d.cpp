/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 15/04/2021
Programa: Matriz 3 Numeros
Exercicio: Lista 03 / letra D
==========================================================*/

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

void funcaomatriz (int x [1][3]);    

int main (void){
    int matriz [1][3] = {{1, 2, 3}};
    funcaomatriz (matriz);
    system ("pause");
}
void funcaomatriz (int x[1][3]) {
    srand(time(NULL));
    for (int i = 0; i < 1; ++i) {
        for (int j = 0; j < 3; ++j) {
            x[i][j] = (rand() % 2) +1;
        }
    }
    for (int i = 0; i < 1; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << x[i][j];
        }
    printf ("\n");
    }
}