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

// insert at tail
void insert_at_tail(Node* &head, Node* &tail, int value)
{
    Node* newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->previous = tail;
    tail = newNode;
}

int main()
{   
    // node creation
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* tail = new Node(300);

    // link creation
    head->next = a;
    a->previous = head;

    a->next = tail;
    tail->previous = a;

    // insert at tail
    insert_at_tail(head, tail, 400);
    insert_at_tail(head, tail, 500);

    // print
    print_forward(head);

    return 0;
}