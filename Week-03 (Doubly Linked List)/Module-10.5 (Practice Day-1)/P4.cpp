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

// Updated: Corrected the insert_at_any_position function
void insert_at_any_position(Node *&head, Node *&tail, int index, int value)
{
     Node *newNode = new Node(value);
     if (index == 0)
     { // If the index is 0, insert at head
          insert_at_head(head, tail, value);
          return;
     }

     Node *temp = head;
     for (int i = 0; i < index - 1; i++)
     { 
          if (temp == NULL)
               return; 
          temp = temp->next;
     }

     newNode->next = temp->next;
     newNode->previous = temp;

     if (temp->next != NULL)
     { // Update next node's previous pointer
          temp->next->previous = newNode;
     }
     else
     {
          tail = newNode; // Update tail if inserted at the end
     }
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
        else if (x == size(head))
        {
            insert_at_tail(head, tail, v);
            print_forward(head);
            print_backward(tail);
        }
        else
        {
            insert_at_any_position(head, tail, x, v);
            print_forward(head);
            print_backward(tail);
        }
    }

    return 0;
}