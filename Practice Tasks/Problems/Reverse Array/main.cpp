#include <iostream>
#include <string>
using namespace std;

template <class T>
void print(T dta)
{
    cout << dta << endl;
}

void reverseArray(int *arr, int size)
{
    int *start = arr;
    int *last = arr + (size - 1);

    while (start < last)
    {
        int temp = *start;

        *start = *last;
        *last = temp;

        start++;
        last--;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    for (auto e : arr)
    {
        print(e);
    }

    return 0;
}