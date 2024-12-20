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
int maxValue(Node *head)
{
    Node *tmp = head;
    int maxValue = INT_MIN;
    while (tmp != NULL)
    {
        if (tmp->value > maxValue)
        {
            maxValue = tmp->value;
        }
        tmp = tmp->next;
    }
    return maxValue;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int count1 = 0, count2 = 0;

    while (1)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }

        insertAtTail(head, tail, value);
        count1++;
    }
    int value = maxValue(head);
    cout << value << endl;

    return 0;
}
