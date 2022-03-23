#include <iostream>
#include <math.h>

using namespace std;

float calculadora(int numero_um, int numero_dois, char caractere);

int main(void)
{
    int num1, num2;
    char c;
    inicio:
    system("cls");
    cout << "Digite os dois numeros em seguida o caractere desejado." << endl;
    cin >> num1;
    cin >> num2;
    cin >> c;
    printf("%.2f\n", calculadora(num1, num2, c));
    system("pause");
    goto inicio;
}

float calculadora(int numero_um, int numero_dois, char caractere)
{
    switch (caractere)
    {
    case '+':
        return numero_um + numero_dois;
        break;
    case '-':
        return numero_um - numero_dois;
        break;
    case 'x':
        return numero_um * numero_dois;
        break;
    case '/':
        return numero_dois % numero_um;
        break;
    case '^':
        return pow(numero_um, numero_dois);
        break;
    default:
        cout << "Algum numero ou caractere invalido tente novamente!";
    }
}
