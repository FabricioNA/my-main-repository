/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 28/04/2021
Programa: Aprovado ou Reprovado
Exercicio: Lista 03 / letra C
==========================================================*/

#include <time.h>
#include <string.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstdlib>

using namespace std;

void somaMedia (int a, int b);

int main(){
    
    int Nota1, Nota2;
    float media;
    
    cout << "Digite Nota1: " << endl;
    cin >> Nota1;
    cout << "Digite Nota2: " << endl;
    cin >> Nota2;
    
    somaMedia (Nota1, Nota2);
}
void somaMedia (int a, int b){
    float media = (a + b) / 2;
    string resultado = (media < 8) ? "REPROVADO" : "APROVADO";
    cout << "A media de " << a << " e " << b << " eh: " << media << " entao voce esta " << resultado << endl;
}