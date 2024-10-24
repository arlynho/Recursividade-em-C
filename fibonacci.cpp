#include <iostream>
using namespace std;

int fibonacciRec(int n)
{
    if (n == 0 || n == 1)
        return n; // aqui Resolveu o caso base
    return fibonacciRec(n - 1) + fibonacciRec(n - 2);
}

int main()
{
    int n;

    cout << "digite o valor de sequencias para fibonacci:" << endl;
    cin >> n;

    cout << "Fibo de " << n << "=" << fibonacciRec(n) << endl;
    return 0;
}
