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

// inset at tail
void insert_at_tail(Node* &head, Node* &tail, int value)
{
    Node* newNode = new Node(value);
    // corner case
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
    // Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* tail = new Node(30);

    // corner case
    Node* head = NULL;
    Node* tail = NULL;

    // node connections
    // head->next = a;
    // a->previous = head;

    // a->next = tail;
    // tail->previous = a;

    // insert function call
    insert_at_tail(head, tail, 100);
    insert_at_tail(head, tail, 200);

    // print function call
    print_forward(head);

    return 0;
}