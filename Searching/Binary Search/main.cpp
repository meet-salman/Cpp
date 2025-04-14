#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int start = 0,
        end = n;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == k)
            return mid;

        if (arr[mid] < k)
            start = mid + 1;
        if (arr[mid] > k)
            end = mid - 1;
    }
    return -1;
}

int main()
{

    int n, k;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> k;

    cout << binarySearch(arr, n, k);

    return 0;
}