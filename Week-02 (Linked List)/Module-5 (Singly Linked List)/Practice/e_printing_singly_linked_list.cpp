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
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* b = new Node(300);
    Node* c = new Node(400);

    head->next = a;
    a->next = b;
    b->next = c;

    Node* temp = head;

    while (head != NULL)    
    {
        cout << head->value << endl;
        head = head->next;
    }
    
    // while (head != NULL)    
    // {
    //     cout << head->value << endl;
    //     head = head->next;
    // }

    while (temp != NULL)    
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
    
    return 0;
}