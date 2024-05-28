#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        int maxlength = 0;
        vector<int> result = {-1};
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                long long sum = 0;
                int len = j - i + 1;
                for (int k = i; k <= j; k++)
                {
                    sum += arr[k];
                    if (sum == s && len > maxlength)
                    {
                        maxlength = max(maxlength, len);
                        result.clear();
                        result.push_back(i + 1);
                        result.push_back(k + 1);
                    }
                }
            }
        }

        return result;
    }
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySumOptimized1(vector<int> arr, int n, long long s)
    {
        int maxlength = 0;
        vector<int> result = {-1};
        for (int i = 0; i < n; i++)
        {
            long long sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += arr[j];
                if (sum == s && j - i + 1 > maxlength)
                {
                    result.clear();
                    result.push_back(i + 1);
                    result.push_back(j + 1);
                    maxlength = max(maxlength, j - i + 1);
                }
            }
        }

        return result;
    }
    vector<int> subarraySumOptimized2(vector<int> arr, int n, long long s)
    {
        int maxlength = 0;
        vector<int> result = {-1};
        for (int i = 0; i < n; i++)
        {
            long long sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += arr[j];
                if (sum == s && j - i + 1 > maxlength)
                {
                    result.clear();
                    result.push_back(i + 1);
                    result.push_back(j + 1);
                    maxlength = max(maxlength, j - i + 1);
                }
            }
        }

        return result;
    }
};

int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution solution;
    // vector<int> result = solution.subarraySumOptimized1(arr, n, s);
    vector<int> result = solution.subarraySum(arr, n, s);

    if (result.empty() || result[0] == -1)
    {
        cout << "No subarray found with sum equal to " << s << endl;
    }
    else
    {
        cout << "Subarray with sum equal to " << s << " is: ";
        for (int i : result)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
