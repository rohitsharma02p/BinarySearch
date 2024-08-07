#include "bits/stdc++.h"
using namespace std;

void reverseArray(vector<int> &arr, int n)
{
    // first element = i
    // last element = n - 1 - i
    for (int i = 0; i < n / 2; i++)
    {
        // swap(arr[i], arr[n - 1 - i]);
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

void reverseSubarray(vector<int> &arr, int i, int j)
{
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void isSortBySubarrayReversal(vector<int> &arr, int n, int k)
{

    if (k == 1 && is_sorted(arr.begin(), arr.end()))
    {

        cout << "YES" << endl;
    }
    else if (k == 1 && !is_sorted(arr.begin(), arr.end()))
    {
        cout << "NO" << endl;
    }

    if (k > 1)
    {
        cout << "YES" << endl;
    }
}
void find()
{
    int n, k;
    cin >> n >> k;
    int i = 0;
    vector<int> arr;
    while (i < n)
    {
        int val;
        cin >> val;
        arr.push_back(val);
        i++;
    }
    isSortBySubarrayReversal(arr, n, k);
}

int main()
{
    int test;
    cin >> test;
    int i = 0;
    while (i < test)
    {

        find();
        i++;
    }
    return 0;
}