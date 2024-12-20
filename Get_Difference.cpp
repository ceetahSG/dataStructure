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
int minValue(Node *head)
{
    Node *tmp = head;

    int minValue = INT_MAX;
    while (tmp != NULL)
    {
        if (tmp->value < minValue)
        {
            minValue = tmp->value;
        }
        tmp = tmp->next;
    }
    return minValue;
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
    }
    int max = maxValue(head);
    int min = minValue(head);
    cout << max - min;

    return 0;
}
