#include <iostream>
using namespace std;

int digitsCount(int num, int count)
{
    if (num == 0)
        return count;

    num /= 10;

    return digitsCount(num, count + 1);
}

int main()
{

    int num = 12345, count = 0;

    cout << digitsCount(num, count);

    return 0;
}