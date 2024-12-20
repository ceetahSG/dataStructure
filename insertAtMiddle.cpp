#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void insertAtIndex(Node *&head, int value, int pos)
{
    Node *newNode = new Node(value);
    int count = 1;
    Node *tmp = head;

    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}
void printLinkedList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->next = b;
    insertAtIndex(head, 100, 2);
    insertAtIndex(head, 300, 2);

    printLinkedList(head);

    return 0;
}
