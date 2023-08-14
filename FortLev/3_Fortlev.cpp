#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c;
    string mensagem;
inicio:
    system("cls");
    cout << "Digite os 3 lados do triangulo" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if ((a < (b + c)) and (b < (a + c)) and (c < (a + b)))
    {
        if ((a == b) and (b == c))
        {
            mensagem = "Triangulo Equilatero";
        }
        else
        {
            if ((a == b) or (b == c) or (c == a))
            {
                mensagem = "Triangulo Isosceles";
            }
            else
            {
                mensagem = "Triangulo Escaleno";
            }
        }
    }
    else
    {
        mensagem = "Nao e possivel formar um triangulo";
    }
    cout << mensagem << endl;
    system("pause");
    goto inicio;
    return 0;
}
// RESPOSTA: 
// 1 2 3 -> Nao foi possivel formar um triangulo
// 3 4 5 -> Triangulo Escaleno
// 2 2 4 -> Nao e possivel formar um triangulo
// 4 4 4 -> Triangulo Equilatero
// 5 3 3 -> Triangulo Isoceles