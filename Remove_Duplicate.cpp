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
    Node *tmp = new Node(value);
    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    else
    {
        tail->next = tmp;
        tail = tmp;
    }
}
void display(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

void removeDuplicate(Node *head)
{

    Node *i = head;
    while (i != NULL && i->next != NULL)
    {
        Node *j = i;
        while (j->next != NULL)
        {
            if (i->value == j->next->value)
            {
                Node *tmp = j->next;
                j->next = j->next->next;
                delete tmp;
            }
            else
            {
                j = j->next;
            }
        }
        i = i->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        else
        {
            insertAtTail(head, tail, x);
        }
    }
    removeDuplicate(head);
    display(head);

    return 0;
}
