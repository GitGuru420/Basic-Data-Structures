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

void reverse_doubly(Node* head, Node* tail)
{
    for(Node *i = head, *j = tail; i != j && i->previous != j; i=i->next, j=j->previous)
    {
        swap(i->value, j->value);
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while(true)
    {
        cin >> value;
        if(value == -1)
        {
            break;
        }
        insert_at_tail(head, tail, value);
    }
    print_forward(head);
    reverse_doubly(head, tail);
    print_forward(head);
    cout << head->value << endl;
    cout << tail->value << endl;
    return 0;
}