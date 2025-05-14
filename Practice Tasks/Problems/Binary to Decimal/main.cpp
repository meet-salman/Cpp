#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int BinToDec(string binary)
{
    int decimal = 0,
        len = binary.length() - 1;

    for (int i = 0; i <= len; i++)
    {
        if (binary[i] == '1')
            decimal += pow(2, len - i);
    }

    return decimal;
}

int main()
{
    string binary;
    cin >> binary;

    cout << BinToDec(binary);

    return 0;
}