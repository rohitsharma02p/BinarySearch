// First Negative Number in every Window of Size K | Sliding Window
#include <bits/stdc++.h>
using namespace std;

int firstnegative(int *arr, int size, int k)
{
    
}
int main()
{
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << firstnegative(arr, n, k);
    delete[] arr;
    return 0;
}