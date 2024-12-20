#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter Number" << endl;
    cin >> num;

    int factorial = 1;

    if (num == 0)
    {
        cout << factorial << endl;
    }
    else if (num > 0)
    {

        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        cout << factorial << endl;
    }
    else
    {
        cout << "Invalid Number" << endl;
    }

    return 0;
}