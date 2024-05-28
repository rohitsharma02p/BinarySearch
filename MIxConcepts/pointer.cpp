// Create a pointer variable with the name ptr, that points to a string variable

#include "bits/stdc++.h"
using namespace std;

int main()
{
    //  pointer point that points to a int object
    // 1.
    int score = 66;
    cout << &score << endl;
    int *point = &score;
    cout << point;

    // 2.
    // Create a pointer variable with the name ptr, that should point to a string variable named food:
    string food = "Pizza";
    string *ptr = &food;
    cout << ptr;
    return 0;
}