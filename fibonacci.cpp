#include <iostream>
using namespace std;

long Fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Podaj n-ty wyraz ciągu fibonacciego: ";
    cin >> n;

    cout << Fibonacci(n) << endl;

    return 0;
}