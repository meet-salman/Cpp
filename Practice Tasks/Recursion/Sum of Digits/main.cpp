#include <iostream>
using namespace std;

int digitsSum(int n)
{
    if (n == 1)
    {
        return n;
    }

    int d = n % 10;
    n /= 10;

    return d + digitsSum(n);
}

int main()
{

    int n = 123456, sumOfDigits = digitsSum(n);

    cout << sumOfDigits;

    return 0;
}