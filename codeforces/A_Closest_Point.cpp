#include "bits/stdc++.h"
using namespace std;

void is_closest(vector<int> &vec)
{
    if (vec.size() < 2)
    {

        return;
    }

    int temp[2];
    for (int i = 0; i < vec.size(); i++)
    {

        if (i == 0)
        {
            // For the first element, only compare with the next element
            int dis_p = abs(vec[i + 1] - vec[i]);
            cout << "Difference with next: " << dis_p << endl;
        }
        else if (i == vec.size() - 1)
        {
            // For the last element, only compare with the previous element
            int dis_n = abs(vec[i] - vec[i - 1]);
            cout << "Difference with previous: " << dis_n << endl;
        }
        else
        {
            // For middle elements, compare both previous and next
            int dis_p = abs(vec[i + 1] - vec[i]);
            int dis_n = abs(vec[i] - vec[i - 1]);
            cout << "Difference with next: " << dis_p << ", Difference with previous: " << dis_n << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    int x = 0;
    while (x < t)
    {
        int n;
        cin >> n;
        vector<int> val(n);
        for (int i = 0; i < n; i++)
        {
            cin >> val[i];
        }
        is_closest(val);
        cout << "\n \n \n \n \n \n";
        x++;
    }
    return 0;
}