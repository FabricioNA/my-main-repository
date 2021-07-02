/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 12/04/2021
Programa: Iniciais do Nome em Maiusculo
Exercicio: Lista 03 / letra B
==========================================================*/

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

string converttouppercase(char text[]);

int main(void){ 
char nomecompleto[50]; 
    cout << "Seu nome ou qualquer frase em minusculo:" << endl; 
    scanf("%[^\n]", nomecompleto);
    cout << converttouppercase(nomecompleto) << endl;
    system("pause");
}
string converttouppercase(char text[]){
    
    for (int i = 0; i < strlen(text); i++){
	    text[i] = tolower(text[i]);
	}
    for(int i = 0; i < strlen(text); i++){ 
        if(i == 0 || text[i - 1] == ' '){
            text[i] = toupper(text[i]);
        }
    }
    string yourtext = text;
    return yourtext;
}   