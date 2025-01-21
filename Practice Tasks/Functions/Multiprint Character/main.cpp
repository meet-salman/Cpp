#include <iostream>
using namespace std;

// Function for Print '*' multiple times
void multiPrint(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        cout << c;
    }
    cout << endl;
}

// Triangle
// *
// **
// ***
// ****
// *****
void triangle(int lines, char c)
{
    cout << "Triangle" << endl;
    for (int i = 1; i <= lines; i++)
    {
        multiPrint(i, c);
    }
    cout << endl;
}

// Upside Down Triangle
// *****
// ****
// ***
// **
// *
void upsideDownTriangle(int lines, char c)
{
    cout << "Upside Down Triangle" << endl;
    for (int i = lines; i >= 1; i--)
    {
        multiPrint(i, c);
    }
    cout << endl;
}

// Diamond
//*
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
void diamond(int lines, char c)
{
    cout << "Diamond" << endl;
    for (int i = 1; i <= lines; i++)
    {
        multiPrint(i, c);
    }

    for (int i = lines - 1; i >= 1; i--)
    {
        multiPrint(i, c);
    }
    cout << endl;
}

int main()
{

    int n = 5;
    char c = '*';

    triangle(n, c);

    upsideDownTriangle(n, c);

    diamond(n, c);

    return 0;
}