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
bool isSorted(Node *head)
{

    Node *temp = nullptr;
    while (head != nullptr)
    {

        if (temp == nullptr)
        {
            temp = head;
            head = head->next;
            continue;
        }
        if (head->data < temp->data)
        {
            return false;
        }
        temp = head;
        head = head->next;
    }

    return true;
}
bool isSortedOptimized(Node *head)
{
    while (head != nullptr && head->next != nullptr)
    {
        if (head->data > head->next->data)
        {
            return false;
        }
        head = head->next;
    }
    return true;
}
int main()
{
    int a[5] = {3, 4, 5, 7, 9};
    Node *head = createLinkedList(a);
    bool is_sorted = isSortedOptimized(head);
    if (is_sorted)
    {
        cout << "Sorted";
    }
    else
    {

        cout << "Not sorted";
    }
    return 0;
}