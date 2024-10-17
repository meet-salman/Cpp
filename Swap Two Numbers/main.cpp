#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cout << "Enter First Number:" << endl;
    cin >> a;

    cout << "Enter Second Number:" << endl;
    cin >> b;

    // Without using any third variable
    a = a + b; // 5 + 10 = 15
    b = a - b; // 15 - 10 = 5
    a = a - b; // 15 - 5 = 10

    /*
    // By using temporary third variable
    int temp;

        temp = a; // 5
        a = b;    // 10
        b = temp; // 5
    */

    cout << "First Num was " << b << ", Now it is " << a << endl;
    cout << "Second Num was " << a << ", Now it is " << b;

    return 0;
}