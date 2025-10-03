#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print(const T &val)
{
    cout << val << "\n";
}

void find_divisors(set<int> &divisors, int n)
{
    int i = 1;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            divisors.insert(i);
            divisors.insert(n / i);
        }
        i++;
    }
}

int main()
{
    int n;
    cin >> n;

    set<int> divisors;

    find_divisors(divisors, n);

    for (auto div : divisors)
        print(div);

    return 0;
}