#include <iostream>
using namespace std;
int f(int n){
    if (n){
        return n*f(n-1);
    }
    else{
        return 1;
    }
}
int main(){
    int x = 1, y = 2;
    cout << f(x+y) << endl;
    return 0;
}
// RESPOSTA: 6