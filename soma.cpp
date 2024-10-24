#include <iostream>
using namespace std;

int somatorio(int valor)
{
    int soma = 0;
    for (int i = 1; i <= valor; i++)
    {
        soma += i;
    }
    return soma;
}

int somatorioRec(int valor)
{
    // tratando o caso base
    if (valor == 0)
        return 0;

    return valor + somatorioRec(valor - 1);
}
int main()
{

    int x, y;
    y = somatorio(5);
    x = somatorioRec(5);
    cout << "Iterada=" << y << endl;
    cout << "recursiva=" << x << endl;
    return 0;
}