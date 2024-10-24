#include <iostream>
using namespace std;
int potencia(int x, int y)
{
    if (y == 0)
        return 1;
    return x * potencia(x, y - 1);
}

int main()
{
    int x, y;

    cout << "Digite o valor do numero da base:" << endl;
    cin >> x;
    cout << "Digite o valor da potencia:" << endl;
    cin >> y;

    cout << "resultado =" << potencia(x, y) << endl;
    return 0;
}