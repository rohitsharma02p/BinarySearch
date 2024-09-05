#include "bits/stdc++.h"
using namespace std;
#define endl "\n"

int good_sequence(vector<int> &v, int N)
{
    unordered_map<int, int> m;
    int count = 0;
    // 1 -> 2 => 1
    // 3 -> 5 => 2
    // 2 -> 2 => 0
    // 7 -> 1 => 1
    // 8 -> 3 => 3
    for (auto x : v)
    {
        m[x]++;
    }
    for (auto x : m)
    {
        if (x.second > x.first)
        {
            count += x.second - x.first;
        }
        if (x.second < x.first)
        {
            count += x.second;
        }
    }
    return count;
}
int main()
{
    int N;
    cin >> N;
    vector<int> v(N);
    int temp = N;
    while (temp--)
    {
        cin >> v[N - temp - 1];
    }
    cout << good_sequence(v, N) << endl;
    return 0;
}