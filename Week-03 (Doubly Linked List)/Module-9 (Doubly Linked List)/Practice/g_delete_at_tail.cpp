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

void print_forward(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void delete_at_tail(Node* &head, Node* &tail)
{
    Node* deleteNode = tail;
    tail = tail->previous;
    delete deleteNode;
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

int main()
{
    Node* head = new Node(100);
    Node* b = new Node(200);
    Node* c = new Node(300);
    Node* tail = new Node(400);

    head->next = b;
    b->previous = head;

    b->next = c;
    c->previous = b;

    c->next = tail;
    tail->previous = c;

    delete_at_tail(head, tail);
    print_forward(head);
    return 0;
}