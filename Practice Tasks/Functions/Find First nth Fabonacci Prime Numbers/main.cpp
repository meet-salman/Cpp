#include <iostream>
using namespace std;

// My Code
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int fibo(int n)
{
    if (n <= 1)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}

void fibPrime(int n)
{
    int count = 0,
        i = 0;
    while (count < n)
    {
        int fib = fibo(i);
        if (isPrime(fib))
        {
            cout << fib << " ";
            count++;
        }
        i++;
    }
}

int main()
{

    fibPrime(5);

    return 0;
}