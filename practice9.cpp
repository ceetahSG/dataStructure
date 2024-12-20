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
void insertAtTail(Node *&head, Node *&tail, int x)
{
    Node *tmp = new Node(x);
    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    tail->next = tmp;
    tail = tmp;
}
void printLinkedList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
void printMiddle(Node *head, int size)
{
    Node *tmp = head;
    if (size % 2 != 0)
    {
        for (int i = 0; i < size / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->value;
    }
    else
    {
        for (int i = 1; i < size / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->value << " " << tmp->next->value;
    }
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
    printMiddle(head, count);

    return 0;
}
