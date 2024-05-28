#include "bits/stdc++.h"
using namespace std;

// 5! = 5*4*3*2*1 = 120
// 4! = 4*3*2*1
long long int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}