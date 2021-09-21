#include <iostream>
#include <string>
#include <math.h>
#define k 9 * pow(10,9)

using namespace std;

double verifymodule(double number){
    if (number < 0){
        number = number * (-1);
        return number;
    }
    return number;
}

double CoulombsLaw(int choosed, double F, double q1, double q2, double r){
    switch (choosed){
    case 0:
        F = (q1 * q2 / pow(r,2)) * k;
        return F;  
    case 1:
        r = sqrt((q1 * q2 / F) * k);
        return r;
    case 2:
        q1 = (pow(r,2) / k * q2) * F;
        return q1;
    case 3:
        q2 = (pow(r,2) / k * q1) * F;
        return q2;
    default:
        cout << "Escolha uma opcao possivel" << endl;
        break;
    }
}

int main(int argc, const char** argv) {
    int opcao;
    double a, b, c, d;

    while (true){
    
    inicio:
    cout << "\a---- Lei de Coulomb: O que deseja encontrar? ----" << endl;
    cout << endl <<" 0 - Forca Eletroestatica" << endl;
    cout << " 1 - Distancia entre as cargas" << endl;
    cout << " 2 - Valor da Carga 1" << endl;
    cout << " 3 - Valor da Carga 2" << endl;
    cout << " 4 - Sair" << endl;
    cout << endl << "-----------------------------------------" << endl;
    cout << pow(10,9);
    cout << endl << "Escolha uma opcao:" << endl;
    cin >> opcao;

    if (opcao == 4){ 
        break;}
        
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
        cout << "Digite o valor da Força Eletroestatica" << endl;
        cin >> a;
        cout << "Digite o valor da Carga 1:" << endl;
        cin >> b;
        cout << "Digite o valor da Carga 2:" << endl;
        cin >> c;
        break;

    case 2:
        cout << "Digite o valor da Força Eletroestatica" << endl;
        cin >> a;
        cout << "Digite o valor da Carga 2:" << endl;
        cin >> c;
        cout << "Digite o valor da Distancia entre as Cargas:" << endl;
        cin >> d;
        break;

    case 3:
        cout << "Digite o valor da Força Eletroestatica" << endl;
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