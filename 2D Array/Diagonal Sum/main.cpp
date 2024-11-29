#include <iostream>
using namespace std;

int main()
{

    int arr[3][3] =
        {
            {6, 6, 10},
            {9, 9, 0},
            {1, 1, 8}},
        sum = 0;

    // Sum of main diagonal
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            sum += arr[i][j + i];
        }
    }

    cout << sum << endl;
    sum = 0;

    // Sum of secondary diagonal
    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j > 1; j--)
        {
            sum += arr[i][j - i];
        }
    }

    cout << sum << endl;

    return 0;
}