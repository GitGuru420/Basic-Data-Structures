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
    Node* head = new Node(100);
    // cout << head->value << endl;
    // cout << head->next << endl;
    Node* a = new Node(200);
    Node* b = new Node(300);

    // Node link creation
    head->next = a;
    a->next = b;

    // print linked list Node value with address
    cout << head->value << " " << head->next << endl;
    cout << head->next->value << " " << head->next->next << endl;
    cout << head->next->next->value << " " << head->next->next->next << endl;

    return 0;
}