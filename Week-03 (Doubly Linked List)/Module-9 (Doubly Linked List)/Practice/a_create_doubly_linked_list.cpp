#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        Node* previous;
        int value;
        Node* next;
    Node(int value)
    {
        this->previous = NULL;
        this->value = value;
        this->next = NULL;
    }
};

int main()
{   
    // node creation
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* b = new Node(300);
    Node* tail = new Node(400);

    // link creation
    head->next = a;
    a->previous = head;

    a->next = b;
    b->previous = a;

    b->next = tail;
    tail->previous = b;

    return 0;
}