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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    // node connections
    head->next = a;
    a->previous = head;

    a->next = tail;
    tail->previous = a;

    insert_at_any(head, 2, 100);
    insert_at_any(head, 1, 500);
    print_forward(head);

    return 0;
}