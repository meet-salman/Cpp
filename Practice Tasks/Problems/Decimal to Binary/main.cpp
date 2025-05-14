#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decToBin(int num)
{
    if (num == 0)
        return "0";

    string b;
    while (num > 0)
    {
        int bit = num % 2;
        b += bit + '0';
        num /= 2;
    }

    reverse(b.begin(), b.end());
    return b;
}

int main()
{
    int num;
    cin >> num;

    cout << decToBin(num);

    return 0;
}