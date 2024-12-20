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

int main()
{
    Node *head = new Node(20);
    Node *a = new Node(30);
    Node *b = new Node(40);
    head->next = a;
    a->next = b;

    cout << head->value << endl;
    cout << head->next->value << endl;
    cout << head->next->next->value << endl;

    return 0;
}
