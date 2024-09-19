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
int noOfNodes(Node *head)
{
    int count = 0;
    if (head == nullptr)
        return 0;
    while (head != nullptr)
    {
        count += 1;
        head = head->next;
    }
    return count;
}
int main()
{
    int a[5] = {3, 4, 5, 7, 9};
    Node *head = createLinkedList(a);
    int nodesCount = noOfNodes(head);
    int middle = nodesCount / 2;
    if (middle == 0)
    {
        cout << middle;
        middle += 1;
    }

    cout << "Middle: " << middle;
    return 0;
}