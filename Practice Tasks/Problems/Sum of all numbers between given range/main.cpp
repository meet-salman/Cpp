#include <iostream>
using namespace std;

int main()
{

    int num1, num2;

    cout << "Enter First Number" << endl;
    cin >> num1;

    cout << "Enter Second Number" << endl;
    cin >> num2;

    int sum = 0;

    for (int i = num1; i <= num2; i++)
    {
        sum += i;
    }

    cout << sum << endl;

    return sum;

    return 0;
}