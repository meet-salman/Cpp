#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print(const T &val)
{
    cout << val << "\n";
}

void reverse_array(int *left, int *right)
{
    if (left >= right)
        return;

    swap(*left, *right);

    reverse_array(left + 1, right - 1);
}

int main()
{

    vector<int> vec = {1, 2, 3, 4, 5, 6};

    reverse_array(&vec.at(0), &vec.at(vec.size() - 1));

    for (auto e : vec)
        print(e);

    return 0;
}