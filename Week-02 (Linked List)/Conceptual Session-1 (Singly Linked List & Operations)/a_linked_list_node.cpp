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
    // dynamic Node creation
    Node* head = new Node(10);
    // cout << head->value << endl;
    // cout << head->next << endl;
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    cout << head->value << endl;
    // cout << a << endl;
    // cout << head->next << endl;
    cout << head->next->value << endl;
    cout << head->next->next->value << endl;
    
    return 0;
}