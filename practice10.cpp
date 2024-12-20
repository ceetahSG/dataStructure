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
void sortCheck(Node *head)
{
    Node *tmp = head;
    bool check = false;

    while (tmp ->next != NULL)
    {
        if (tmp->value < tmp->next->value)
        {
            check = true;
            tmp = tmp->next;
        }
        else
        {
            check = false;
            break;
        }
    }
    if (check)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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
    sortCheck(head);

    return 0;
}
