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

// insert at any
void insert_at_any(Node* &head, int index, int value)
{
    Node* newNode = new Node(value);
    Node* temp = head;
    for(int i=1; i<index; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->previous = newNode;
    temp->next = newNode;
    newNode->previous = temp;
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

    // insert at any
    insert_at_any(head, 2, 600);
    insert_at_any(head, 1, 700);

    // print
    print_forward(head);

    return 0;
}