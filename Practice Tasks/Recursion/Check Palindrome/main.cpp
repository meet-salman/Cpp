#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print(const T &val)
{
    cout << val << "\n";
}

bool check_palindrome(char *left, char *right)
{
    if (left >= right)
        return true;

    if (*left != *right)
        return false;

    return check_palindrome(left + 1, right - 1);
}

int main()
{

    char arr[] = "LEVEL";
    int len = strlen(arr);

    if (check_palindrome(arr, arr + len - 1))
        print("Palindrome");
    else
        print("Not Palindrome");

    return 0;
}