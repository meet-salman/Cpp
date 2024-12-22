#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        int count = 0;
        for (int j = 4; j >= i; j--)
        {
            count++;
            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}