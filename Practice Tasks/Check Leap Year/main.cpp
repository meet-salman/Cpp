#include <iostream>
using namespace std;

int main()
{

    int year;

    cout << "Enter Year" << endl;
    cin >> year;

    if (year % 4 == 0)
    {
        cout << year << " is Leap Year";
    }
    else
    {
        cout << year << " is not Leap Year";
    }

    return 0;
}