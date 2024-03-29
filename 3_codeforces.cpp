#include "bits/stdc++.h"
using namespace std;
// 118A - String Task
int main()
{
    string s;
    cin >> s;
    int s_len = s.size();
    vector<char> vowels = {'A', 'O', 'Y', 'E', 'U', 'I'};
    string res;
    for (int i = 0; i < s_len; i++)
    {
        bool isPresent = false;
        char input_char = tolower(s[i]);
        for (auto j = 0; j < vowels.size(); j++)
        {
            char vowel_char = tolower(vowels[j]);
            if (input_char == vowel_char)
            {
                isPresent = true;
            }
        }
        if (!isPresent)
        {

            res = res + "." + input_char;
        }
    }
    cout << res;
    return 0;
}
