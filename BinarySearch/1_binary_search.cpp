

#include <bits/stdc++.h>
using namespace std;

int lineraSearch(vector<int> num, int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (num[i] == element)
        {

            return i;
        }
    }
}
int binarySearch(vector<int> num, int size, int element)
{
    sort(num.begin(), num.end());

    int start = 0;
    int end = size - 1;
    while (end >= start)
    {
        int mid = start + (end - start) / 2; // To prevent int overflow
        if (num[mid] == element)
        {
            return mid;
            break;
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
int binarySearchOnReverseSortedArray(vector<int> num, int size, int element)
{
    sort(num.begin(), num.end(), greater<int>());

    int start = 0;
    int end = size - 1;
    while (end >= start)
    {
        int mid = start + (end - start) / 2; // To prevent int overflow
        if (num[mid] == element)
        {

            return mid;
            break;
        }
        else if (num[mid] < element)
        {
            end = mid - 1;
        }
        else if (num[mid] > element)
        {
            start = mid + 1;
        }
    }
}

int orderAgnosticBS(vector<int> num, int size, int element)
{

    if (num[0] > num[1])
    {
        return binarySearchOnReverseSortedArray(num, size, element);
    }
    if (num[0] < num[1])
    {
        return binarySearch(num, size, element);
    }
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
    int elementToSearch = 4;
    cout << "index of element :" << lineraSearch(num, size, elementToSearch) << endl;
    cout << "index of element :" << binarySearch(num, size, elementToSearch)
         << endl;
    cout << "index of element :" << binarySearchOnReverseSortedArray(num, size, elementToSearch)
         << endl;

    sort(num.begin(), num.end(), greater<int>());
    cout << "index of element :" << orderAgnosticBS(num, size, elementToSearch)
         << endl;
    return 0;
}