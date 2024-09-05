#include "bits/stdc++.h"
using namespace std;
#define endl "\n"

void radio_station(vector<string> servers, vector<string> commands)
{
    unordered_map<string, string> freq;

    for (int i = 0; i < servers.size(); i++)
    {
        istringstream ss(servers[i]);
        string firstWord, secondWord;
        ss >> firstWord >> secondWord;
        freq[secondWord] = firstWord;
    }
    for (auto x : commands)
    {
        istringstream ww(x);
        string firstWord, secondWord;
        ww >> firstWord >> secondWord;
        string st = secondWord.substr(0, secondWord.size() - 1);
        cout << x + " #" + freq[st] << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    cin.ignore();
    vector<string> servers(n);
    vector<string> commands(m);
    for (int i = 0; i < n; i++)
    {
        getline(cin, servers[i]);
    }
    for (int i = 0; i < m; i++)
    {
        getline(cin, commands[i]);
    }

    radio_station(servers, commands);
    return 0;
}