#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}
void printList(Node *head)
{
    Node *current = head; // Start at the head node
    while (current != nullptr)
    {                                    // Continue until current is nullptr
        cout << current->data << " -> "; // Print current node data
        current = current->next;         // Move to the next node
    }
    cout << "nullptr" << endl; // End of list
}
Node *createList()
{
    int N, data;
    cin >> N >> data;
    Node *head = createNode(data);
    Node *p, *q = nullptr;
    p = head;
    for (int i = 1; i < N; i++)
    {

        int data;
        cin >> data;
        q = createNode(data);
        p->next = q;
        p = q;
    }
    return head;
}
int main()
{
    Node *head = createList();
    printList(head);
    return 0;
}