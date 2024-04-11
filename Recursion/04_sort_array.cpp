#include "bits/stdc++.h"
using namespace std;
// input arr = [3,8,6,7]
// output arr = [3,6,7,8]
// Hypothesis
// [3,8,6] => [3,6,8] + 7
// Induction

void insertIntoSortedArray(vector<int> &arr, int n, int last_element)
{

    int i = n - 1;

    while (i >= 0 && arr[i] > last_element)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = last_element;
}

// This function will place the value in sorted place 
void insertIntoSortedArrayRecursion(vector<int> &arr, int last_element)
{
    int size = arr.size();
    if (size == 0 || arr[size - 1] <= last_element)
    {
        arr.push_back(last_element);
        return;
    }
    int last = arr[size - 1];
    arr.pop_back();
    insertIntoSortedArrayRecursion(arr, last_element);
    arr.push_back(last);
}

void sort(vector<int> &arr)
{
    int size = arr.size();
    if (size <= 1)
    {
        return;
    }
    int last_element = arr[size - 1];
    arr.pop_back();
    sort(arr);
    insertIntoSortedArrayRecursion(arr, last_element);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }
    sort(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}