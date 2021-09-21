#include <iostream>
#include <string>
#include <math.h>
#define k 9 * pow(10,9)

using namespace std;

float verifymodule(float number){
    if (number < 0)
    {
        number = number * (-1);
        return number;
    }
    return number;
}

float CoulombsLaw(int choosed, float F, float q1, float q2, float r){
    switch (choosed){
        case 0:
            F = (q1 * q2 / pow(r, 2)) * k;
            return F;
        case 1:
            r = sqrt((q1 * q2 / F) * k);
            return r;
        case 2:
            q1 = (pow(r, 2) * F / k * q2) ;
            return q1;
        case 3:
            q2 = (pow(r, 2) * F / k * q1) ;
            return q2;
        default:
            cout << "Escolha uma opcao possivel" << endl;
        break;
    }
}

int main(int argc, const char **argv){
    int opcao;
    float a, b, c, d;

    while (true){

        inicio:
        cout << "\a---- Lei de Coulomb: O que deseja encontrar? ----" << endl;
        cout << endl << " 0 - Forca Eletroestatica" << endl;
        cout << " 1 - Distancia entre as cargas" << endl;
        cout << " 2 - Valor da Carga 1" << endl;
        cout << " 3 - Valor da Carga 2" << endl;
        cout << " 4 - Sair" << endl;
        cout << "Obs: Favor inserir numeros ja convertidos como o exemplo de: 1 mC -> 0.001";
        cout << endl << "-----------------------------------------" << endl;
        cout << endl << "Escolha uma opcao:" << endl;
        cin >> opcao;

        if (opcao == 4){
            break;
        }

        switch (opcao){
        case 0:
            cout << "Digite o valor da Carga 1:" << endl;
            cin >> b;
            cout << "Digite o valor da Carga 2:" << endl;
            cin >> c;
            cout << "Digite o valor da Distancia entre as Cargas:" << endl;
            cin >> d;
            break;

        case 1:
            cout << "Digite o valor da Forca Eletroestatica" << endl;
            cin >> a;
            cout << "Digite o valor da Carga 1:" << endl;
            cin >> b;
            cout << "Digite o valor da Carga 2:" << endl;
            cin >> c;
            break;

        case 2:
            cout << "Digite o valor da Forca Eletroestatica" << endl;
            cin >> a;
            cout << "Digite o valor da Carga 2:" << endl;
            cin >> c;
            cout << "Digite o valor da Distancia entre as Cargas:" << endl;
            cin >> d;
            break;

        case 3:
            cout << "Digite o valor da Forca Eletroestatica" << endl;
            cin >> a;
            cout << "Digite o valor da Carga 1:" << endl;
            cin >> b;
            cout << "Digite o valor da Distancia entre as Cargas:" << endl;
            cin >> d;
            break;

        default:
            cout << "Escolha uma opcao possivel" << endl;
            goto inicio;
        }

        b = verifymodule(b);
        c = verifymodule(c);

        system("cls");
        cout << "O valor encontrado foi de:" << CoulombsLaw(opcao, a, b, c, d) << endl;
        system("pause");
    }
    return 0;
}
// 0- F = ? -> 60N q1 = 3.10^-5 -> 0.00003 q2 = 5.10^-6 -> 0.000005 r = 15cm -> 0.15 m