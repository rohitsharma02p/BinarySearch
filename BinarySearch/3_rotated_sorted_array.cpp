#include <bits/stdc++.h>
using namespace std;

// Number of Times a Sorted array is Rotated
int no_ofTimes_Rotation(vector<int> num, int size)
{
    int min = 0;
    int max = size - 1;
    while (max >= min)
    {
        int mid = min + (max - min) / 2;
        int previous = (mid + size - 1) % size;
        int next = (mid + 1) % size;
        if (num[mid] < num[next] && num[mid] < num[previous])
        {
            return size - mid;
        }
        else if (num[mid] < num[max])
        {
            max = mid - 1;
        }
        else if (num[mid] > num[max])
        {
            min = mid + 1;
        }
    }
    return 0;
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

    int rotationCount = no_ofTimes_Rotation(num, size);

    cout << "Rotation Count: " << rotationCount << endl;
    return 0;
}
