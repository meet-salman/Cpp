#include <iostream>
using namespace std;

int main()
{
    int num = 1634, copyNum = num, result = 0, n = 0;

    // Count digits of number
    while (copyNum > 0)
    {
        int digit = copyNum % 10;
        copyNum /= 10;

        n++;
    }

    copyNum = num;

    // Calculate power & Add in result
    while (copyNum > 0)
    {
        int digit = copyNum % 10, sum = 1;
        copyNum /= 10;

        // Calculate power of digit
        for (int i = 1; i <= n; i++)
        {
            sum *= digit;
        }

        // Store power of every digit in result
        result += sum;
    }

    // Compare result with original number
    if (num == result)
    {
        cout << num << " is Armstrong Number" << endl;
    }
    else
    {
        cout << num << " is not Armstrong Number" << endl;
    }

    return 0;
}