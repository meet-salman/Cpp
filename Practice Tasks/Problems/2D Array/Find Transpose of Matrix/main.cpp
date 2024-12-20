#include <iostream>
using namespace std;

int main()
{

    int matrix[4][4] =
        {
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4}},
        transposedMatrix[4][4];

    // Transpose of Matrix
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    // Print Transposed Matrix
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}