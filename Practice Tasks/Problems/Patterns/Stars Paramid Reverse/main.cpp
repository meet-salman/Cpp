#include <iostream>
#include <string>
using namespace std;

// void print_pattern(int n)
// {
//     for (int i = n; i > 0; i--)
//     {
//         // spaces
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << " ";
//         }

//         // Stars
//         for (int k = 0; k < (2 * i) - 1; k++)
//         {
//             cout << "*";
//         }

//         // spaces
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << " ";
//         }

//         cout << endl;
//     }
// }

void print_pattern(int n)
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
        print_pattern(no_of_lines);
    }

    return 0;
}