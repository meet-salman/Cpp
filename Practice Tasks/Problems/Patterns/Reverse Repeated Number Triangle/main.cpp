#include <iostream>
#include <string>
using namespace std;

void print_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << n - i;
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