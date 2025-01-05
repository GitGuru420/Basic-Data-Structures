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

// print doubly linked list backward
void print_backward(Node* tail)
{
    Node* temp = tail;
    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->previous;
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

// insert at head
void insert_at_head(Node* &head, Node* &tail, int value)
{
    Node* newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->previous = newNode;
    head = newNode;
}

void insert_at_any_position(Node* &head, int index, int value)
{
    Node* newNode = new Node(value); 
    Node* temp = head;
    for(int i=1; i<index; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// size
int size(Node* head1)
{
    Node* temp = head1;
    int sz = 0;
    while(temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;
    int x, v;
    while(q--)
    {
        cin >> x >> v;
        if(x > size(head))
        {
            cout << "Invalid" << endl;
        }
        else if(x == 0)
        {
            insert_at_head(head, tail, v);
            print_forward(head);
            print_backward(tail);
        }
        else if(x == 1 && size(head) == 1)
        {
            insert_at_tail(head, tail, v);
            print_forward(head);
            print_backward(tail);
        }
        else
        {
            insert_at_any_position(head, x, v);
            print_forward(head);
            print_backward(tail);
        }
    }

    return 0;
}