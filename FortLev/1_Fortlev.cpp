#include <iostream>
using namespace std;

int main()
{
    int somadeimpares = 0;
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            somadeimpares = i + somadeimpares;
        }
    }
    cout << somadeimpares << endl;
    system("pause");
    return 0;
}
