// Your task is to efficiently calculate values a^b modulo 10^9+7.
// Note that in this task we assume that 0^0=1.
// Input
// The first input line contains an integer n: the number of calculations.
// After this, there are n lines, each containing two integers a and b.
// Output
// Print each value a^b modulo 10^9+7.
// Constraints

// 1 \le n \le 2 \cdot 10^5
// 0 \le a,b \le 10^9

// Example
// Input:
// 3
// 3 4
// 2 8
// 123 123

// Output:
// 81
// 256
// 921450052

#include "bits/stdc++.h"
using namespace std;
using ll = long long;

ll exp(ll x, ll n, ll m)
{
    assert(n >= 0);
    x %= m; // note: m * m must be less than 2^63 to avoid ll overflow
    ll res = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            res = res * x % m;
        }
        x = x * x % m;
        n /= 2;
    }
    return res;
}



int main()
{
    // a^b mod m = (a mod m)^b mod m
    int n;
    cin >> n;
    long long m = 1e9 + 7;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << exp(a, b, 1e9 + 7) << "\n";
    }
    return 0;
}