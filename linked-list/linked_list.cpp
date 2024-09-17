#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node *head = new Node();
    Node *second = new Node();

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = nullptr;

    Node *p = head;
    Node *q;
    // IMPORTANT statements

    // q is pointing to same node as p
    q = p;
    // q is pointing to next node of p
    q = p->next;
    // p is pointing to next node of p
    p = p->next;

    // If pointer is pointing to some node or not
    if (p != nullptr)
    {
        // If pointer is pointing to some node
    };
    if (p != 0)
    {
        // If pointer is pointing to some node
    };
    if (p)
    {
        // If pointer is pointing to some node
    };

    // If the node is last node or not
    if (p->next == nullptr)
    {
        // If the node is last node
    };
    return 0;
}