#include <iostream>
using namespace std;
int main()
{

    int arr[5][5] =
        {
            {3, 5, 1, 8, 9},
            {7, 3, 8, 8, 4},
            {1, 2, 0, 4, 2},
            {9, 8, 7, 6, 1},
            {1, 7, 6, 4, 7}};

    // Input Values
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Row " << i + 1 << " Values" << endl;

        for (int j = 0; j < 5; j++)
        {
            cout << "[" << i + 1 << "][" << j + 1 << "]";
            int val;
            cin >> val;

            arr[i][j] = val;
        }
    }

    cout << endl;
    cout << "Entered Values" << endl;

    // Print Entered Values
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    // Sum of Rows
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += arr[i][j];
        }

        cout << "Sum of Row " << i + 1 << ": " << sum << endl;
    }

    cout << endl;
    cout << endl;

    // Sum of Columns
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += arr[j][i];
        }

        cout << "Sum of Column " << i + 1 << ": " << sum << endl;
    }

    return 0;
}