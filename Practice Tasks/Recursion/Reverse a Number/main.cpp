#include <iostream>
using namespace std;

int reverse(int n, int rev = 0)
{

    if (n == 0)
        return rev;

    rev = rev * 10 + n % 10;
    n /= 10;

    return reverse(n, rev);
}

int main()
{
    int n = 12345;

    cout << reverse(n);

    return 0;
}