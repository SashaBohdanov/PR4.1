#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int l, N, i;
    double S;
    cout << "l = "; cin >> l;
    cout << "N = "; cin >> N;
    S = 0;

    i = l;
    while (i <= N)
    {
        S += (1 / i) + sqrt(1 + pow(sin(i), 2));
        i++;
    }
    cout << S << endl;

    S = 0;

    i = l;
    do {
        S += (1 / i) + sqrt(1 + pow(sin(i), 2));
        i++;
    } while (i <= N);
    cout << S << endl;

    S = 0;

    // Використовуючи цикл for
    for (i = l; i <= N; i++)
    {
        S += (1 / i) + sqrt(1 + sin(i) * sin(i));
    }
    cout << S << endl;

    S = 0;

    // Використовуючи цикл for у зворотному порядку
    for (i = N; i >= l; i--)
    {
        S += (1 / i) + sqrt(1 + pow(sin(i), 2));
    }
    cout << S << endl;

    return 0;
}

