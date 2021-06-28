#include <iostream>
#include <string>
#include "function_uteis.cpp"
#include "classe.h"
using namespace std;

// o -> substitui o . para se referir como acontece na struct

int main(int argc, const char** argv) {
    cliente *cl1 = new cliente(1);
    cliente *cl2 = new cliente(2);
    cliente *cl3 = new cliente(3);

    cl1 -> imprimir();

    return EXIT_SUCCESS;
}