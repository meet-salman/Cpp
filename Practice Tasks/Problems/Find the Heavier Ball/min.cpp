#include <bits/stdc++.h>
using namespace std;

template <class T>
void print(string str, T dta)
{
    cout << str << dta << endl;
}

void create_groups(vector<int> &balls, vector<int> &g1, vector<int> &g2, vector<int> &g3)
{

    int no_of_balls = balls.size(),
        group_size = ceil(no_of_balls / 3.0);
    g1.clear(), g2.clear(), g3.clear();

    for (int i = 0; i < no_of_balls; i++)
    {
        if (i < group_size)
            g1.push_back(balls[i]);
        else if (i < 2 * group_size)
            g2.push_back(balls[i]);
        else
            g3.push_back(balls[i]);
    }
}

int sum_of_group(const vector<int> &weights, vector<int> &g)
{
    return accumulate(
        g.begin(), g.end(), 0,
        [&](int total, int idx)
        { return total + weights[idx]; });
}

void find_suspicious_group(int sum1, int sum2, vector<int> &g1, vector<int> &g2, vector<int> &g3, vector<int> &suspicious)
{
    if (sum1 > sum2)
        suspicious = g1;
    else if (sum2 > sum1)
        suspicious = g2;
    else
        suspicious = g3;
}

void grouping(const vector<int> &weights, vector<int> &balls, vector<int> &g1, vector<int> &g2, vector<int> &g3, vector<int> &suspicious)
{
    create_groups(balls, g1, g2, g3);

    int sum1 = sum_of_group(weights, g1),
        sum2 = sum_of_group(weights, g2);

    find_suspicious_group(sum1, sum2, g1, g2, g3, suspicious);

    balls = suspicious;
}

int find_havier_ball(const vector<int> &weights, vector<int> &balls, int k, vector<int> &g1, vector<int> &g2, vector<int> &g3, vector<int> &suspicious)
{

    int used = 0;

    while (balls.size() > 1 && used < k)
    {
        grouping(weights, balls, g1, g2, g3, suspicious);
        used++;
    }

    if (balls.size() == 1)
        return balls[0];
    else
        return -1;
}

int main()
{
    vector<int> weights = {2, 2, 2, 2, 2, 2, 2, 2, 2,
                           2, 2, 2, 2, 2, 2, 2, 2, 2,
                           2, 2, 2, 2, 2, 2, 2, 6, 2},
                g1, g2, g3, balls, suspicious;
    int k = 3;

    for (int i = 0; i < weights.size(); i++)
        balls.push_back(i);

    int idx = find_havier_ball(weights, balls, k, g1, g2, g3, suspicious);

    print("Heavier ball at index: ", idx);

    return 0;
}