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
void check(Node *head1, Node *head2)
{
    bool check = false;
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    while (tmp1 != NULL)
    {
        if (tmp1->value == tmp2->value)
        {
            check = true;
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
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
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int count1 = 0, count2 = 0;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (1)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }

        insertAtTail(head1, tail1, value);
        count1++;
    }
    while (1)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }

        insertAtTail(head2, tail2, value);
        count2++;
    }
    if (count1 != count2)
    {
        cout << "NO";
    }
    else
    {
        check(head1, head2);
    }

    return 0;
}
