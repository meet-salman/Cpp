#include <bits/stdc++.h>
using namespace std;

void calculate_prefix_sum(vector<int> &vec, vector<int> &pfx, int n)
{
    for (int i = 1; i <= n; i++)
    {
        cin >> vec[i];
        pfx[i] = pfx[i - 1] + vec[i];
    }

    // for (auto &n : pfx)
    //     cout << n << " ";
    // cout << "\n";
}

int get_ranged_sum(const vector<int> &vec, const vector<int> &pfx, int l, int r, int n)
{
    if (l < 0 || r >= n || l > r)
        return -1;
    else
        return (pfx[r + 1] - pfx[l]);
}

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n + 1, 0);
    vector<int> pfx(n + 1, 0);

    calculate_prefix_sum(vec, pfx, n);

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int sum = get_ranged_sum(vec, pfx, l, r, n);
        cout << "SUM: " << sum << endl;
    }

    return 0;
}