#include <iostream>
#include <string>
using namespace std;

void print_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        bool binary = i % 2 == 0 ? false : true;

        for (int j = 0; j < i; j++)
        {
            cout << binary << " ";
            binary = 1 - binary;
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