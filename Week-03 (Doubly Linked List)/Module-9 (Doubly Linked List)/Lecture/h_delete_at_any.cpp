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

// print forward doubly linked list
void print_forward(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

// delete at any
void delete_at_any(Node* head, int index)
{
    Node* temp = head;
    for(int i=1; i<index; i++)
    {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->previous = temp;
    delete deleteNode;
}

int main()
{
    // node creation
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    // node connections
    head->next = a;
    a->previous = head;

    a->next = b;
    b->previous = a;

    b->next = tail;
    tail->previous = b;

    delete_at_any(head, 2);

    // print function call
    print_forward(head);

    return 0;
}