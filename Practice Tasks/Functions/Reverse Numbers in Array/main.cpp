#include <iostream>
using namespace std;

void takeInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Number " << i + 1 << ": ";
        cin >> arr[i];
    }
}

int reverse(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int n = arr[i],
            rev = 0;
        while (n > 0)
        {
            int d = n % 10;
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        arr[i] = rev;
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int size = 5,
        arr[size];

    takeInput(arr, size);
    reverse(arr, size);
    printArr(arr, size);

    return 0;
}
