#include <iostream>
using namespace std;

int findMax(int a, int b, int c)
{
    if (a > b && a > c)
        return a;

    if (b > a && b > c)
        return b;

    return c;
}

int main()
{

    int a = 35, b = 17, c = 9,
        max = findMax(a, b, c);

    cout << max;

    return 0;
}