#include <iostream>
using namespace std;

void sortArr(int arr[], int n)
{
    int start = 0,
        min = arr[start],
        minIdx = start;

    while (start < n)
    {
        for (int i = start; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                minIdx = i;
            }
        }

        if (arr[start] != min)
        {
            int temp = arr[start];
            arr[start] = min;
            arr[minIdx] = temp;
        }

        start++;
        min = arr[start];
    }
}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sortArr(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}