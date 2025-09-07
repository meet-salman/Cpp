#include <bits/stdc++.h>
using namespace std;

template <class T>
void print(T dta)
{
    cout << dta << endl;
}

// Left Rotate
template <class T>
void leftRotate(T *arr, int size, int k)
{
    k = k % size;
    while (k > 0)
    {
        int shift = *arr,
            *n = arr,
            *last = arr + (size - 1);

        for (int i = 1; i < size; i++)
        {
            *n = *(n - 1);
            n++;
        }

        *last = shift;
        k--;
    }
}

// Right Rotate
template <class T>
void rightRotate(T *arr, int size, int k)
{
    k = k % size;
    while (k > 0)
    {
        int shift = *(arr + (size - 1)),
            *n = arr + (size - 1);

        for (int i = 1; i < size; i++)
        {
            *n = *(n - 1);
            n--;
        }

        *arr = shift;
        k--;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    rightRotate(arr, size, k);

    // Print Array
    for (auto e : arr)
    {
        print(e);
    }

    return 0;
}