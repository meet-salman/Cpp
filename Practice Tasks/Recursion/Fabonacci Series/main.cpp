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
    int range, x, i = 0;

    cout << "Enter Range for Fabonacci Series: ";
    cin >> range;

    while (i < range)
    {
        x = fibo(i);
        cout << x << " ";
        i++;
    }

    return 0;
}