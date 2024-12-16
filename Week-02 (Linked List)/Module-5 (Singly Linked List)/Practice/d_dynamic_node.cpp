#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int main()
{
    // declare dynamic node
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* b = new Node(300);

    // link
    head->next = a;
    a->next = b;

    cout << head->value << endl;
    cout << head->next->value << endl;
    cout << head->next->next->value << endl;

    return 0;
}