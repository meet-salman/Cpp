#include <iostream>
#include <string>
using namespace std;

void print_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Spaces
        for (int k = 0; k < ((2 * n) - (2 * i)); k++)
        {
            cout << " ";
        }

        // Reverse Numbers
        for (int j = i; j > 0; j--)
        {
            cout << j;
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