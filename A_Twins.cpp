#include "bits/stdc++.h"
using namespace std;

// num of coins = min
// sum = x
// sum of coin value taken y > x-y

bool greaterThan(int a, int b)
{
    return a > b;
}
int main()
{
    int n;
    cin >> n;
    vector<int> values;
    int sum = 0;
    int count = 0;
    int val = 0;
    while (n--)
    {
        int a;
        cin >> a;
        sum += a;
        values.push_back(a);
    }
    sort(values.begin(), values.end(), greaterThan);
    for (int i = 0; i < values.size(); i++)
    {
        if (count > sum / 2)
        {
            break;
        }
        val++;
        count += values[i];
    }

    cout << val << endl;
    return 0;
}