#include "bits/stdc++.h"
using namespace std;

// Height of binary tree

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};
// Function to calculate the height
int height(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
};

int main()
{
    // Height of tree = 3
    // Constructing a simple binary tree:
    //      1
    //     / \
    //    2   3
    //       / \
    //      4   5
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);

    // Call the height function and print the result
    cout << "Height of the tree: " << height(root) << endl;
    return 0;
}