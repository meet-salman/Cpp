#include <iostream>
#include <string>
using namespace std;

template <class T>
T searchElement(T arr[], int size, T key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int idx;
    // Integer
    int intArr[5] = {1, 2, 3, 4, 5};
    idx = searchElement(intArr, sizeof(intArr) / sizeof(int), 5);
    cout << idx << endl;

    // Float
    float floatArr[5] = {1.1f, 2.3f, 3.6f, 4.0f, 5.9f};
    idx = searchElement(floatArr, sizeof(floatArr) / sizeof(float), 4.7f);
    cout << idx << endl;

    // Double
    double doubleArr[5] = {1.35, 2.35, 3.35, 4.35, 5.35};
    idx = searchElement(doubleArr, sizeof(doubleArr) / sizeof(double), 3.35);
    cout << idx << endl;

    // Char
    char charArr[5] = {'!', '@', '#', '$', '%'};
    idx = searchElement(charArr, sizeof(charArr) / sizeof(char), '$');
    cout << idx << endl;

    return 0;
}