#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
            return i;
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

    cout << linearSearch(arr, n, k);

    return 0;
}