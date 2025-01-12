#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n, factorial;

    cout << "Enter Number to Find Factorial: ";
    cin >> n;

    factorial = fact(n);
    cout << factorial;

    return 0;
}