#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int dividend, divisor, quotient, remainder;

    cout << "Enter Dividend:" << endl;
    cin >> dividend;

    cout << "Enter Divisor:" << endl;
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;
    // remainder = dividend - (quotient * divisor);

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}