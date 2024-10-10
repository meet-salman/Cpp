#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;
    cout << "Enter c" << endl;
    cin >> c;

    if (a == b && b == c)
    {
        cout << "all numbers are equal";
    }
    else
    {

        if (a == b)
        {
            if (a > c)
            {
                cout << "a & b are equal and greater";
            }
            else
            {
                cout << "c is greater";
            }
        }
        else if (a == c)
        {
            if (a > b)
            {
                cout << "a & c are equal and greater";
            }
            else
            {
                cout << "b is greater";
            }
        }
        else if (b == c)
        {
            if (b > a)
            {
                cout << "b & c are equal and greater";
            }
            else
            {
                cout << "a is greater";
            }
        }
        else if (a > b && a > c)
        {
            cout << "a is greater";
        }
        else if (b > a && b > c)
        {
            cout << "b is greater";
        }

        else
        {
            cout << "c is greater";
        }
    }

    return 0;
}