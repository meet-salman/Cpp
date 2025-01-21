#include <iostream>
#include <cstring>
using namespace std;

int RP(int a, int b)
{
    if (a == 1)
        return b;

    if (a % 2 == 0)
        return RP(a / 2, b * 2);

    if (a % 2 != 0)
        return RP((a - 1) / 2, b * 2) + b;
}

int main()
{
    int a = 5, b = 1;

    cout << RP(a, b);

    return 0;
}