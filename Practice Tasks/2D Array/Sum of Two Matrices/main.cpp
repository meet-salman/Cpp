#include <iostream>
using namespace std;

int main()
{

    int arr1[4][4] =
        {
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4}};
    int arr2[4][4] =
        {
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4}};
    int newArr[4][4];

    // Calculating Sum
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            newArr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Print New Array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << newArr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}