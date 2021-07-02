/* ==========================================================
Aluno: Erika Assis, Fabricio Aleixo, Lailson Souza
Data: 09/04/2021
Programa: Asterisco perrcorre seu nome com funçao
Exercicio: Lista 01 / letra c
==========================================================*/
#include <time.h>
#include <string.h>
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#define count 10

using namespace std;

void scrollerasterisk(string defaultname, string backupname);

int main(void){
    string FirstName, RestoreName;
    cout << "Seu primeiro nome:" << endl;
    getline(cin, FirstName);
    RestoreName = FirstName;
    cout << endl;
    scrollerasterisk(FirstName, RestoreName);
    system("pause");
}
void scrollerasterisk(string defaultname, string backupname){
    for (int i = 0; i < defaultname.length(); i++){
    defaultname[i] = '*';   
        for ( int j = 0; j < defaultname.length(); j++){
            cout << defaultname[j];
            }
    defaultname = backupname;    
    cout << endl;
    }    
}