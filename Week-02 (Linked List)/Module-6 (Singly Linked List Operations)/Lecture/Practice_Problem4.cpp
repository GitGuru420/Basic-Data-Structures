#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head, int value)
{
    Node* newNode = new Node(value); 
    newNode->next = head;
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
    tail = tail->next;
}

int size(Node* head)
{
    Node* temp = head;
    int sz = 0;
    while(temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}

void print_linked_list(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1) 
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    
    int idx;
    while(cin >> idx >> val)    // for query
    {
        int sz = size(head);
        if(idx > sz)
        {
            cout << "Invalid" << endl;
        }
        else if(idx == sz)
        {
            insert_at_tail(head, tail, val);
            print_linked_list(head);
        }
        else if(idx == 0)
        {
            insert_at_head(head, val);
            print_linked_list(head);
        }
        else {
            insert_at_any_position(head, idx, val);
            print_linked_list(head);
        }
    }

    return 0;
}