#include "bits/stdc++.h"
using namespace std;

int main()
{

    stack<int> marks;
    cout << "Pushing 15 and 20 into the stack" << endl;
    marks.push(15);
    marks.push(20);
    cout << "Size of the stack: " << marks.size() << endl;
    cout << "The top element is: " << marks.top() << endl;

    cout << "Popping an element" << endl;
    marks.pop();
    cout << "Size of the stack: " << marks.size() << endl;
    cout << "The top element is: " << marks.top() << endl;
    marks.pop();

    cout << "Checking if the stack is empty: ";
    // 0 means not empty
    // 1 means empty
    cout << marks.empty() << endl;
    cout << "Size of the stack: " << marks.size() << endl;
    return 0;
}