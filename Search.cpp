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
    else
    {
        tail->next = tmp;
        tail = tmp;
    }
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
void find(Node *head, int x)
{
    Node *tmp = head;
    bool check = false;
    int count = 0;
    while (tmp != NULL)
    {
        if (tmp->value == x)
        {
            check = true;
            break;
        }
        else
        {
            tmp = tmp->next;
            count++;
        }
    }
    if (check)
    {
        cout << count << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (1)
        {
            int value;
            cin >> value;
            if (value == -1)
            {
                break;
            }

            insertAtTail(head, tail, value);
        }
        int x;
        cin >> x;
        find(head, x);
    }

    return 0;
}
