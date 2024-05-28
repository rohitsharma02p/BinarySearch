#include "bits/stdc++.h"
using namespace std;

// temp string of 3,2,1
// sort -> 1,2,3
// append + after each chracter
//   str =""
//   str = temp[i]+"+"   loop i = 0->len-2;

int main()
{
    string s;
    cin >> s;

    int str_size = s.size();
    string temp = "";
    string res = "";

    for (int i = 0; i < str_size; i++)
    {
        if (s[i] != '+')
        {
            temp += s[i];
        }
    }
    sort(temp.begin(), temp.end());

    for (int i = 0; i <= temp.size() - 1; i++)
    {

        if (i == temp.size() - 1)
        {
            cout << temp[i];
        }
        else
        {
            cout << temp[i] << '+';
        }
    }

    return 0;
}