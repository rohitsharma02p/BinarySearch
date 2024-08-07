#include "bits/stdc++.h"
using namespace std;

void reverseArray(vector<int> &arr, int l, int h)
{
    if (l > h)
    {
        return;
    }

    int temp = arr[l];
    arr[l] = arr[h];
    arr[h] = temp;
    reverseArray(arr, l + 1, h - 1);
}
int main()
{
    vector<int> arr;
    int size;
    cin >> size;
    int i = 0;
    while (i < size)
    {
        int val;
        cin >> val;
        arr.push_back(val);
        i++;
    }
    reverseArray(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}