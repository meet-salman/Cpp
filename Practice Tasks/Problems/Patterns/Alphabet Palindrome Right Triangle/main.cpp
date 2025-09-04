#include <iostream>
#include <string>
using namespace std;

void print_pattern(int n)
{
    // for (int i = 1; i <= n; i++)
    // {
    //     char c = 64;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         c++;
    //         cout << c << " ";
    //     }

    //     for (int k = 1; k < i; k++)
    //     {
    //         c--;
    //         cout << c << " ";
    //     }

    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        // Letters
        for (int j = 0; j <= i; j++)
        {
            cout << (char)('A' + j) << " ";
        }

        // Palindrome Letters
        for (int k = i - 1; k >= 0; k--)
        {
            cout << (char)('A' + k) << " ";
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