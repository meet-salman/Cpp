#include <iostream>
using namespace std;

// --------------------------------------------------------------
// GENERATE FIBONANCCI SERIES
// --------------------------------------------------------------

int generateFibonacciSeries(int range)
{
    int a = 0,
        b = 1,
        c = 0;

    for (int i = 1; i <= range; i++)
    {
        cout << c << (i < range ? ", " : " ");

        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}

int main()
{

    // --------------------------------------------------------------
    // GENERATE FIBONANCCI SERIES
    // --------------------------------------------------------------

    int range;

    cout << "Enter Range" << endl;
    cin >> range;

    generateFibonacciSeries(range);

    return 0;
}