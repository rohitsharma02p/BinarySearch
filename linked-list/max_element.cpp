#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    Node *next = nullptr;
};
Node *createLinkedList(int a[10])
{
    Node *head = new Node();
    head->data = a[0];
    Node *temp = head;
    for (int i = 1; i < 10; i++)
    {
        Node *newNode = new Node();
        newNode->data = a[i];
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}

void print(Node *head)
{
    if (head == nullptr)
    {
        return;
    }
    cout << head->data << "->";
    print(head->next);
}

int maxElement(Node *head)
{
    if (head == nullptr)
    {
        return INT_MIN;
    }

    int temp_max = maxElement(head->next);

    return max(head->data, temp_max);
}

int main()
{

    int a[10] = {10, 20, 30, 400, 50, 60, 70, 80, 90, 100};
    Node *head = createLinkedList(a);
    // print(head);
    cout << maxElement(head);
    return 0;
}