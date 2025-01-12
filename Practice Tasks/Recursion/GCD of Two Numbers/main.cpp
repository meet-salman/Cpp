#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    // if (a == 0 || b == 0)
    //     return 0;
    // else if (a == b)
    //     return a;
    // else if (a > b)
    //     return gcd(a - b, b);
    // else
    //     return gcd(a, b - a);

    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << gcd(a, b) << endl;

    return 0;
}