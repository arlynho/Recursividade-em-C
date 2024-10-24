#include <iostream>
using namespace std;

int fatorial(int valor)
{

    // caso Base
    if (valor == 1)
        return 1;

    return valor * fatorial(valor - 1);
}

int main()
{
    int y;
    y = fatorial(5);

    cout << "recursiva=" << y << endl;

    return 0;
}