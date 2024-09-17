#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    Node *next = nullptr;
};

Node *createLinkedList(int a[5])
{
    Node *head = new Node();
    head->data = a[0];
    Node *temp = head;
    for (int i = 1; i < 5; i++)
    {
        Node *newNode = new Node();
        newNode->data = a[i];
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}
void recursiveDisplay(Node *head)
{
    if (head == nullptr)
    {
        return;
    }
    cout << head->data << " -> ";
    recursiveDisplay(head->next);
}
string searchElement(Node *head, int key)
{
    // Linear search Iterative
    if (head == nullptr)
        return "No";
    while (head != nullptr)
    {
        if (head->data == key)
            return "Yes";
        head = head->next;
    }
    return "No";
}
string linearSearchRecursive(Node *head, int key)
{
    // Linear search Recursive
    string isPresent = "No";
    if (head == nullptr)
    {
        return "No";
    }
    if (head->data == key)
    {
        return "Yes";
    };
    return linearSearchRecursive(head->next, key);
}
// Linear search can be improved by using Transposition and move to head/front
Node *improvedSearch(Node *head, int key)
{
    if (head == nullptr)
    {
        cout << "false" << endl;
        return head;
    }

    Node *p = head;
    Node *q = nullptr;
    while (p != nullptr)
    {
        if (p->data == key)
        {

            q->next = p->next;
            p->next = head;
            head = p;
            cout << "true" << endl;
            return head;
        }
        q = p;
        p = p->next;
    }
    cout << "true" << endl;
    return head;
}

main()
{
    int a[5] = {3, 4, 5, 7, 9};
    Node *head = createLinkedList(a);
    recursiveDisplay(head);
    cout << "\n";
    int key = 7;
    Node *newHead = improvedSearch(head, key);
    recursiveDisplay(newHead);
    return 0;
}