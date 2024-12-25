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

// print doubly linked list forward
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
void insert_at_any(Node* head, int index, int value)
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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    // link connection
    head->next = a;
    a->previous = head;
    
    a->next = tail;
    tail->previous = a;

    // Node* head = NULL;
    // Node* tail = NULL;

    // insert_at_any
    insert_at_any(head, 1, 100);
    insert_at_any(head, 3, 200);

    // print doubly linked list
    print_forward(head);

    return 0;
}