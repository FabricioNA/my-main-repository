#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string>vectordeteste={"joaozinho", "zezinho", "luizinho", "mamaco loco"};
    vector<string>::iterator it;

    it = vectordeteste.end()-1;
    it = vectordeteste.begin();

    advance(it, 1);
    next(it, 1);
    prev(it, 1);
    
    cout << *it << endl;
    
    for (it = vectordeteste.begin(); it != vectordeteste.end(); it++){
    cout << *it << endl;
    }


}