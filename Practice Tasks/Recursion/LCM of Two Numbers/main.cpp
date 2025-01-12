#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    return b == 0 ? a : hcf(b, a % b);
}

int main()
{
    int a, b, lcm;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    lcm = (a * b) / hcf(a, b);
    cout << lcm << endl;

    return 0;
}