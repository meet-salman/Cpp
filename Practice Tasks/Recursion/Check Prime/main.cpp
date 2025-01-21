#include <iostream>
using namespace std;

bool checkPrime(int num, int i = 2)
{
    if (num < i)
        return false;

    if (i > num / 2)
        return true;

    if (num % i == 0)
        return false;

    return checkPrime(num, i + 1);
}

int main()
{

    int num;

    cout << "Enter Number: ";
    cin >> num;

    cout << num << (checkPrime(num) ? " is" : " is not") << " Prime Number";

    return 0;
}