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
void insertAtHead(Node *&head, int value)
{
    Node *tmp = new Node(value);
    tmp->next = head;
    head = tmp;
}
void insertAtTail(Node *&head, Node *&tail, int value)
{
    Node *tmp = new Node(value);
    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
        return;
    }
    tail->next = tmp;
    tail = tmp;
}
void insertAtIndex(Node *&head, int value, int pos)
{
    Node *newNode = new Node(value);
    Node *tmp = head;

    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void display(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void deleteHead(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int count = 0;

    while (1)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insertAtTail(head, tail, value);
        count++;
    }
    cout << "SIZE = " << count << endl;
    display(head);
    deleteHead(head);
    deleteHead(head);
    deleteHead(head);
    deleteHead(head);
   

    display(head);

    return 0;
}
