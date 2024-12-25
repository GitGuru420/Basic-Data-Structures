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

// delete at head
void delete_at_head(Node* &head, Node* &tail)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->previous = NULL;
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

    // delete at head
    delete_at_head(head, tail);
    delete_at_head(head, tail);
    delete_at_head(head, tail);

    // print doubly linked list
    print_forward(head);

    return 0;
}