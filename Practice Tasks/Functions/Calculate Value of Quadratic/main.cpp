#include <iostream>
using namespace std;

double quadratic(int a, int b, int c, double x)
{
    return (a * (x * x)) + (b * x) + c;
}

int main()
{

    int a = 6, b = 17, c = 12;
    double x = 12;

    cout << quadratic(a, b, c, x);

    return 0;
}