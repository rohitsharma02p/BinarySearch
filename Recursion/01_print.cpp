#include "bits/stdc++.h"
using namespace std;
// print 1 to n
void print1toN(int n)
{
    if (n == 0)
    {
        return;
    }

    print1toN(n - 1);
    cout << n << endl;
}

// print n to 1
// n = 5
// 5,4,3,2,1
// n = 4
// 4,3,2,1
void printNto1(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    printNto1(n - 1);
}

int main()
{
    int n;
    cin >> n;

    printNto1(n);
    return 0;
}