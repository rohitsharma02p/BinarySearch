/*
#include "bits/stdc++.h"
using namespace std;
// Find factors of one number
void findFactorsOfNum(int n)
{
    vector<int> factors;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {

            factors.push_back(i);
            if (i != n / i)
            {
                factors.push_back(n / i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    for (auto factor : factors)
    {
        cout << factor << endl;
    }
}
// Count the number of divisors/factors of the numbers
int countDivisor(int n)
{
    int div = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div++;          // i is a factor
            if (i != n / i) // 3*3 = 9
                div++;      // as n/i is also a factor
        }
    }
    return div;
}
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << countDivisor(i) << "\n"
//              << "\n";
//     }
//     // findFactorsOfNum(n);

//     return 0;
// }

int main()
{
    int n;
    cin >> n;
    vector<int> div(n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            div[j]++; // i is a divisor of j
                      // j is divisible by i
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << div[i] << endl;
    }

    return 0;
}
 */

