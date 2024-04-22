#include "bits/stdc++.h"
using namespace std;

void printStack(stack<int> s)
{
    cout << "Elements in stack from top to bottom:" << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}
void reverseStack(stack<int> &stq)
{
    stack<int> temp_stq;

    while (!stq.empty())
    {
        temp_stq.push(stq.top());
        stq.pop();
    }

    while (!temp_stq.empty())
    {
        stq.push(temp_stq.top());
        temp_stq.pop();
    }
}
void insert(stack<int> &stq, int top)
{

    if (stq.size() == 0 || stq.top() <= top)
    {
        stq.push(top);
        return;
    }
    int temp_top = stq.top();
    stq.pop();
    insert(stq, top);
    stq.push(temp_top);
}

void sortStack(stack<int> &stq)
{
    if (stq.empty() || stq.size() == 1)
    {
        return;
    }
    int top = stq.top();
    stq.pop();
    sortStack(stq);
    insert(stq, top);
}

int main()
{
    int n;
    cin >> n;
    stack<int> stq;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        stq.push(m);
    }
    printStack(stq);
    sortStack(stq);
    printStack(stq);
    return 0;
}