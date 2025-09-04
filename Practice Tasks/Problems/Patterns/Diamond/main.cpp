#include <iostream>
#include <string>
using namespace std;

// Upper Part
void print_pattern_1(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Stars
        for (int k = 0; k < (2 * i) + 1; k++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

// Lower Part
void print_pattern_2(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Stars
        for (int k = 0; k < ((2 * n) - (2 * i + 1)); k++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

int main()
{

    int test_cases;
    cin >> test_cases;

    int no_of_lines;

    for (int t = 0; t < test_cases; t++)
    {
        cin >> no_of_lines;
        while (no_of_lines < 4)
        {
            cin >> no_of_lines;
        }

        print_pattern_1(no_of_lines / 2);
        print_pattern_2(no_of_lines / 2);
    }

    return 0;
}