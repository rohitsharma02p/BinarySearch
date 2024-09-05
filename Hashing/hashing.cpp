#include "bits/stdc++.h"
using namespace std;

// Brute force
void frequencyCount1(vector<int> &nums, int target)
{
    int count = 0;
    for (int num : nums)
    {
        if (num == target)
        {
            count += 1;
        }
    }
    cout << count << endl;
}

// Using hashing
void frequencyCount2(vector<int> &nums, int target)
{
    int MAX_SIZE = 10e7;
    vector<int> hash(MAX_SIZE);
    for (int i = 0; i < nums.size(); i++)
    {
        hash[nums[i] - 1] += 1;
    }
    cout << hash[target - 1];
}
// using map
void frequencyCount3(vector<int> &nums, int target)
{
    unordered_map<int, int> freq;

    for (auto x : nums)
        freq[x]++;
    cout << freq[target];
}
int main()
{
    int size;
    cin >> size;
    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    int target;
    cin >> target;

    frequencyCount3(nums, target);

    return 0;
}
