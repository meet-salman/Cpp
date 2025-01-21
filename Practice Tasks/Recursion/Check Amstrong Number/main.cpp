#include <iostream>
using namespace std;

int countDigits(int num, int count = 0)
{

    if (num == 0)
        return count;

    num /= 10;

    return countDigits(num, count + 1);
}

int power(int base, int ex)
{
    if (ex == 0)
        return 1;

    return base * power(base, ex - 1);
}

int checkAmstrong(int num, int ex)
{
    if (num == 0)
        return 0;

    int d = num % 10;
    num /= 10;

    return power(d, ex) + checkAmstrong(num, ex);
}

int main()
{

    int num = 9474, digits = countDigits(num);

    cout << checkAmstrong(num, digits);
    return 0;
}