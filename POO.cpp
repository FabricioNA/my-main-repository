#include <iostream>
#include <string>

using namespace std;

struct endereco {
	string logr;
	string bairro;
	string cidade;
	char uf[2];
};

class cliente{

public:
    string nome;
    int idade;
    char sexo;
    string faixa_etaria;
    void selec(int tp);

private:
    endereco end;

};
// o -> substitui o . para se referir como acontece na struct
void cliente::selec(int tp){
    switch (tp){
    case 1:
        this -> faixa_etaria = "Crianca";
        break;
    case 2:
        this -> faixa_etaria = "Adulto";
        break;
    case 3:
        this -> faixa_etaria = "Idoso";
        break;
    default:
        break;
    }
}

int main(int argc, const char** argv) {
    cliente *cl = new cliente();
    cl ->selec(1);
    cout << cl -> faixa_etaria;

    return EXIT_SUCCESS;
}