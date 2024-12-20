#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter Number:";
    cin >> num;

    for (int i = 1; i <= num / 2; i++)
    {
        if (i + (num - i) == num)
        {
            cout << i << " + " << num - i << endl;
        }
    }

    return 0;
}