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

// inset at head
void insert_at_head(Node* &head, int value)
{
    Node* newNode = new Node(value);
    newNode->next = head;
    head->previous = newNode;
    head = newNode;
}

int main()
{
    // node creation
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    // node connections
    head->next = a;
    a->previous = head;

    a->next = b;
    b->previous = a;

    // insert function call
    insert_at_head(head, 100);
    insert_at_head(head, 200);

    // print function call
    print_forward(head);

    return 0;
}