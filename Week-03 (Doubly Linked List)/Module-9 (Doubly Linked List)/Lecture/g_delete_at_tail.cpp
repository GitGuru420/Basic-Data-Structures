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

// delete at tail
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
    // node creation
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    // node connections
    head->next = a;
    a->previous = head;

    a->next = tail;
    tail->previous = a;

    delete_at_tail(head, tail);

    // print function call
    print_forward(head);

    return 0;
}