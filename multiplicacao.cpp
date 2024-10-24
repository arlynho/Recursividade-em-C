#include <iostream>
using namespace std;

int multRec(int termo, int vezes)
{
    if (vezes == 0)
        return 0;
    return termo + multRec(termo, vezes - 1);
}
int main()
{

    int termo, vezes;
    cout << "informe o valor:" << endl;
    cin >> termo;
    cout << "informe a quantidade de vezes:" << endl;
    cin >> vezes;

    cout << "Resultado recurviso :" << multRec(termo, vezes);
    return 0;
}