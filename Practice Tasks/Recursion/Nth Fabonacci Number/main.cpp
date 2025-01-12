#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n <= 1)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n, x;

    cout << "Enter Number to Find: ";
    cin >> n;

    x = fibo(n);
    cout << x << endl;

    return 0;
}