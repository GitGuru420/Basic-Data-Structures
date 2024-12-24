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

void delete_at_any(Node* &head, int index)
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
    Node* head = new Node(100);
    Node* b = new Node(200);
    Node* c = new Node(300);
    Node* tail = new Node(400);

    head->next = b;
    b->previous = head;

    b->next = c;
    c->previous = b;

    c->next = tail;
    tail->previous = c;

    delete_at_any(head, 2);
    print_forward(head);
    return 0;
}