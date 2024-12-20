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

    printLinkedList(head1);
    cout << endl;
    printLinkedList(head2);

    if (count1 == count2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
