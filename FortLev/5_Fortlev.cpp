#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
#define ALL 100000
using namespace std;

int palindromo(char num[]);

int main()
{
    char num[ALL];
    cout << "Digite o teste de palindromos." << endl;
    cin >> num;
    int teste = palindromo(num);
    string txt = (teste == 1) ? "palindromo sim" : " nao palindromo";
    cout << txt << endl;
    return 0;
}
int palindromo(char num[])
{
    int tam = strlen(num);
    int k = tam;
    for (int i = 0; i < tam; i++)
    {
        if (num[i] != num[k])
        {
            return 1;
        }
        k--;
    }
    return 0;
}
