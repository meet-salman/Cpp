#include <iostream>
using namespace std;

int main()
{
    int num;
    string result = "";
    bool isNegative = false;

    cout << "Enter Number: ";
    cin >> num;

    // Convert -ve number into +ve
    if (num < 0)
    {
        num *= -1;
        isNegative = true;
    }

    // Convert into string
    while (num > 0)
    {
        int digit = num % 10;         // Get last digit
        char charDigit = '0' + digit; // Convert digit to character
        result = charDigit + result;  // Append to the result
        num /= 10;                    // Remove lase digit
    }

    // Add -ve sign if negative
    if (isNegative)
    {
        result = '-' + result;
    }

    cout << result << endl;

    return 0;
}