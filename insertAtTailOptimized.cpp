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
void insertAtTail(Node *&head, Node *&tail, int value)
{

    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
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
    Node *b = new Node(20);
    Node *tail = new Node(30);
    head->next = b;
    b->next = tail;

    insertAtTail(head, tail, 400);

    insertAtTail(head, tail, 300);
    insertAtTail(head, tail, 400);

    insertAtTail(head, tail, 500);
    insertAtTail(head, tail, 600);

    insertAtTail(head, tail, 3700);

    printLinkedList(head);
    // cout << tail->value;

    return 0;
}
