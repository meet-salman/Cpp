#include <iostream>
#include <string>
using namespace std;

template <class T>

T findMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout << findMax(4, 6) << endl;
    cout << findMax(9.1, 8.4) << endl;
    cout << findMax(3.22, 3.23) << endl;
    cout << findMax('c', 'A') << endl;

    return 0;
}