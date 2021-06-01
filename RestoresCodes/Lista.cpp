#include <iostream>
#include <list>
#include <time.h>
#define count 10

using namespace std;

int main(void){

    list<int> lista, teste;
    list<int>::iterator it; // definir marcado da lista
    for (size_t i = 0; i <= count; i++){
        lista.push_back(i); // inserir elemento por tras
    }
    it = lista.begin(); // dar posiçao inicial pro marcado na lista
    advance(it, 5); // defino aonde quero que ele mude 
    lista.insert(it, 0); // o numero q ele mude
    lista.erase(--it); //remove mas sempre decrementar pra ir no lugar certo
    for (size_t i = 0; i <= count; i++){
        cout << lista.back() << endl; // printa o que ta atras
        lista.pop_back(); // retira o que ta por tras
    }
    lista.clear(); // limpa tudo
    if(!(lista.empty())){
; // verifica se ta vazio
    cout << endl << endl;
    srand(time(NULL));
    for (size_t i = 0; i <= count; i++){
        lista.push_front((rand() % 11) + 1); // inserir elemento aleatorio pela frente
    }
    lista.sort(); // ordena
    lista.reverse(); // inverte
    for (size_t i = 0; i <= count; i++){
        cout << lista.front() << endl; // printa o que ta na frente
        lista.pop_front(); // retira oq ta na frente
    }
    lista.merge(teste); // retira os elementos da lista original e passa pra de dentro do parametro 
    for (size_t i = 0; i <= count; i++){
        cout << lista.front() << endl; // printa o que ta na frente
        lista.pop_front(); // retira oq ta na frente
    }
    }
}