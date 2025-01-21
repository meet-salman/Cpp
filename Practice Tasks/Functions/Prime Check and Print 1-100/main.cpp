#include <iostream>
using namespace std;

bool isPrime(int n, int i = 2)
{
    if (n < i)
        return false;

    if (i > n / 2)
        return true;

    if (n % i == 0)
        return false;

    return isPrime(n, i + 1);
}

void printPrime()
{
    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
}

int main()
{
    printPrime();

    return 0;
}