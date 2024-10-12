#include <iostream>
using namespace std;

// // --------------------------------------------------------------
// // GENERATE FIBONANCCI SERIES
// // --------------------------------------------------------------

int generate_Fibonacci_Series(int range)
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

// // --------------------------------------------------------------
// // FIND Nth NUMBER IN FIBONANCCI SERIES
// // --------------------------------------------------------------

// int find_Num_In_Fibonacci_Series(int num)
// {
//     int a = 0,
//         b = 1,
//         c = 0;

//     for (int i = 1; i <= num; i++)
//     {
//         a = b;
//         b = c;
//         c = a + b;
//     }

//     cout << "\nThe number at " << num << "th in Finonancci series: " << c << endl;

//     return 0;
// }

int main()
{

    // // --------------------------------------------------------------
    // // GENERATE FIBONANCCI SERIES
    // // --------------------------------------------------------------

    int range;

    cout << "Enter Range" << endl;
    cin >> range;

    generate_Fibonacci_Series(range);

    // // --------------------------------------------------------------
    // // FIND Nth NUMBER IN FIBONANCCI SERIES
    // // --------------------------------------------------------------

    // int num;

    // cout << "Enter Number" << endl;
    // cin >> num;

    // find_Num_In_Fibonacci_Series(num);

    return 0;
}