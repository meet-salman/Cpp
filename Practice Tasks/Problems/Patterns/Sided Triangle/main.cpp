#include <iostream>
#include <string>
using namespace std;

void print_pattern(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;

        if (i > n)
            stars = 2 * n - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{

    int test_cases;
    cin >> test_cases;

    int n;

    for (int t = 0; t < test_cases; t++)
    {
        cin >> n;
        print_pattern(n);
    }

    return 0;
}