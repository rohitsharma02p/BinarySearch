#include "bits/stdc++.h"
using namespace std;
/*
You are given a string str that is made up of words separated by spaces. Your task is to find the word with the highest frequency, i.e. it appears the most times in the sentence. If multiple words have maximum frequency, then print the word that occurs first in the sentence.

Examples:

Input: str = "the devil in the sky"
Output: the 2
Explanation: The frequency of "the" is 2, so we return "the" and its frequency "2" i.e., "the 2"  */

class Solution
{
public:
    vector<string> splitWord(string &s)
    {
        stringstream stream(s);
        string word;
        vector<string> stringArray;
        while (stream >> word)
        {
            stringArray.push_back(word);
        }
        return stringArray;
    }

public:
    string maximumFrequency(string &str)
    {
        vector<string> stringArr = splitWord(str);
        unordered_map<string, int> freq;
        pair<string, int> p;
        int max = 0;

        for (auto word : stringArr)
        {
            freq[word]++;
        }

        for (const auto &word : stringArr)
        {
            if (freq[word] > max)
            {
                max = freq[word];
                p.first = word;
                p.second = freq[word];
            }
        }
        return str = p.first + " " + to_string(p.second);
    }

public:
    string maximumFrequency2(string &s)
    {
        string w;
        int f{};
        unordered_map<string, int> m;
        istringstream s1{s}, s2{s};
        while (s1 >> w)
            f = max(f, ++m[w]);

        while (s2 >> w)
            if (m[w] == f)
                break;
        return w + ' ' + to_string(f);
    }
};
int main()
{
    string s;
    getline(cin, s);
    Solution myObj;
    cout << myObj.maximumFrequency(s);
    // maxFrequency(s, s.size());
    return 0;
}