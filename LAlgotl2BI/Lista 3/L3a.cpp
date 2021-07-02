/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 12/04/2021
Programa: Funcao que retorna se é impar
Exercicio: Lista 03 / letra a
==========================================================*/
#include <time.h>
#include <string.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstdlib>
#define count 10

using namespace std;

string verifyodd(int itsodd);

int main(void){
    int number;
	cout << "Informe o numero a ser verificado: ";
	cin >> number;
    cout << verifyodd(number) << endl;
    system("pause");    
}
string verifyodd(int number){
    string request = (number % 2 != 0) ? "Seu numero e impar" : "Seu numero e par";
    return request;
}