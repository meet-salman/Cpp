#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *first, char *last)
{
    if (first >= last)
        return;

    char temp = *first;
    *first = *last;
    *last = temp;

    return reverse(first + 1, last - 1);
}

int main()
{
    char arr[] = "salman";
    int len = strlen(arr);

    reverse(arr, arr + len - 1);

    cout << arr << endl;

    return 0;
}