#include "bits/stdc++.h"
using namespace std;

void printStack(stack<int> stq)
{
    cout << "Elements from top to bottom" << '\n';
    while (!stq.empty())
    {
        cout << stq.top() << endl;
        stq.pop();
    }
}

void deleteMiddleElement(stack<int> &stq)
{
}
int main()
{
    stack<int> stq;
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        stq.push(temp);
    }
    printStack(stq);
    deleteMiddleElement(stq);
    printStack(stq);
    return 0;
}
