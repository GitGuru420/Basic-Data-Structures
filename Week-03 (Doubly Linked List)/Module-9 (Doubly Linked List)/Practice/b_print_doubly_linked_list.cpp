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

// print doubly linked list(forward)
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

// print doubly linked list(backward)
void print_backward(Node* tail)
{
    Node* temp = tail;
    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->previous;
    }
    cout << endl;
}

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

    // print
    print_forward(head);
    print_backward(tail);

    return 0;
}