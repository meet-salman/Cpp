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

// void sortArr(int arr[], int n)
// {

//     for (int start = 0; start < n - 1; start++)
//     {
//         int minIdx = start;

//         for (int i = start + 1; i < n; i++)
//         {
//             if (arr[i] < arr[minIdx])
//             {
//                 minIdx = i;
//             }
//         }

//         if (arr[start] != arr[minIdx])
//         {
//             int temp = arr[start];
//             arr[start] = arr[minIdx];
//             arr[minIdx] = temp;
//         }
//     }
// }

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