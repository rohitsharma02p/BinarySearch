#include <bits/stdc++.h>
using namespace std;
// 1 First and Last occurrence of an Element
// 1 Count of an element in the array

int lastOccurance(vector<int> num, int size, int element)
{
    sort(num.begin(), num.end());

    int start = 0;
    int end = size - 1;
    int index = -1;
    while (end >= start)
    {
        int mid = start + (end - start) / 2; // To prevent int overflow
        if (num[mid] == element)
        {
            start = mid + 1;
            index = mid;
        }
        else if (num[mid] < element)
        {
            start = mid + 1;
        }
        else if (num[mid] > element)
        {
            end = mid - 1;
        }
    }
}
int firstOccurance(vector<int> num, int size, int element)
{
    sort(num.begin(), num.end());

    int start = 0;
    int end = size - 1;
    int index = -1;
    while (end >= start)
    {
        int mid = start + (end - start) / 2; // To prevent int overflow
        if (num[mid] == element)
        {
            end = mid - 1;
            index = mid;
        }
        else if (num[mid] < element)
        {
            start = mid + 1;
        }
        else if (num[mid] > element)
        {
            end = mid - 1;
        }
    }
    return index;
}
int main()
{
    int size;
    cin >> size;
    vector<int> num;
    int i = 0;
    while (i < size)
    {
        int input;
        cin >> input;
        num.push_back(input);
        i++;
    }
    int elementToSearch = 3;
    int first = firstOccurance(num, size, elementToSearch);
    int last = lastOccurance(num, size, elementToSearch);
    cout << "first occurance :" << first << endl;
    cout << "last occurance :" << last << endl;
    cout << "count of an element :" << last - first + 1;
    return 0;
}