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
void insertAtHead(Node *&head, Node *&tail, int value)
{
    Node *tmp = new Node(value);
    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
        return;
    }

    tmp->next = head;
    head = tmp;
}
void insertAtTail(Node *&head, Node *&tail, int value)
{

    Node *tmp = new Node(value);
    if (head == NULL)
    {
        head = tmp;

        tail = head;
        return;
    }
    tail->next = tmp;
    tail = tmp;
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
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    return count;
}

void deleteHead(Node *&head, Node *&tail)
{
    if (head == tail)
    {
        head = NULL;
        tail = NULL;
        return;
    }
    Node *del = head;
    head = head->next;
    delete del;
}
void deleteTail(Node *&head, Node *&tail)
{
    Node *tmp = head;
    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = NULL;
    tail = tmp;
}

void deleteFromIndex(Node *&head, Node *&tail, int idx)
{

    if (idx > size(head) - 1)
    {
        return;
    }
    if (head == NULL)
    {
        return;
    }
    if (idx == 0)
    {
        deleteHead(head, tail);
        return;
    }
    if (idx == size(head) - 1)
    {
        deleteTail(head, tail);
        return;
    }
    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *toDelete = tmp->next;
    tmp->next = toDelete->next;
    delete toDelete;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insertAtHead(head, tail, v);
        }
        else if (x == 1)
        {
            insertAtTail(head, tail, v);
        }
        else
        {
            deleteFromIndex(head, tail, v);
        }
        display(head);
    }

    return 0;
}
