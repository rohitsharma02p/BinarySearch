#include "bits/stdc++.h"
using namespace std;

// 1497. Check If Array Pairs Are Divisible by k

class Solution
{
public:
    bool canArrange(vector<int> &arr, int k)
    {
        // (a+b)%k = (a%k + b%k)%k = 0
        vector<int> remainderCount(k, 0);
        for (int num : arr)
        {
            int remainder = ((num % k) + k) % k; // This ensures a positive remainder
            // 0,1,2,3,4
            remainderCount[remainder]++;
        }
        if (remainderCount[0] % 2 != 0)
        {
            return false;
        }
        for (int r = 1; r <= k / 2; ++r)
        {

            if (r == k - r)
            { // Special case for even K
                if (remainderCount[r] % 2 != 0)
                {
                    return false; // Must be even
                }
            }
            else
            {
                if (remainderCount[r] != remainderCount[k - r])
                {
                    return false; // Counts must match
                }
            }
        }

        return true;
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 10, 6, 7, 8, 9}; // Example input
    int K = 5;                                         // Divisor
    Solution s;
    cout << s.canArrange(arr, K);
    return 0;
}