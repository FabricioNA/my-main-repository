#include <iostream>
#include <string.h>

using namespace std;

int fibonacci(int number);

int main(int argc, char *argv[]) {
    int number;
    cout << "Fibonacci ate: ";
    cin >> number; 
    for (int i = 0; i < number; i++){
        cout << fibonacci(i + 1) << " ";
    }
    return 0;
}
int fibonacci(int number){
    if(number == 1 || number == 2){
        return 1;
    }
    return fibonacci(number - 1) + fibonacci(number - 2);
}

