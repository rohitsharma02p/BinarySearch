#include "bits/stdc++.h"
using namespace std;
// 4A - Watermelon
int main()
{
    int w;
    cin >> w;

    // 2,4,6,8,10
    // 8/2=4(quotient) remainder=0
    // 8--> (2,6),(4,4)
    // Even factors between 1<factor<w => can divide w into even parts
    string isDivide = "NO";
    for (int i = 2; i < w; i++)
    {
        if (w % i == 0)
        {
            if (i % 2 == 0)
            {
                isDivide = "YES";
            }
        }
    }
    cout << isDivide;

    return 0;
}
