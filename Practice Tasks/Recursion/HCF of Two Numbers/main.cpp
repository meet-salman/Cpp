#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    if (b != 0)
        return hcf(b, a % b);
    return a;
}

int main()
{
    int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << hcf(a, b) << endl;

    return 0;
}