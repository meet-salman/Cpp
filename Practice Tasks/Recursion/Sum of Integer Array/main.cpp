#include <iostream>
using namespace std;

int sumOfArrElements(int arr[], int length, int sum = 0)
{
    if (length < 0)
        return sum;

    sum += arr[length];

    return sumOfArrElements(arr, length - 1, sum);
}

int main()
{

    int arr[] = {14, 9, 16, 12, 13, 14, 6, 11, 18, 10, 11},
        length = sizeof(arr) / sizeof(arr[0]),
        totalSum = sumOfArrElements(arr, length - 1);

    cout << totalSum;

    return 0;
}