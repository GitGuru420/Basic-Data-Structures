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
    head = newNode;
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

void delete_at_head(Node* &head)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_at_any(Node* &head, int index)
{
    Node* temp = head;
    for(int i=0; i<index-1; i++) 
    {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
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

void delete_at_tail(Node* &head, Node* &tail, int index)
{
    Node* temp = head;
    for(int i=0; i<index-1; i++) 
    {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    tail = temp;
}


int main()
{   
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;
    while(q--)
    {
        int x, v;
        cin >> x >> v;
        if(x == 0)
        {
            insert_at_head(head, tail, v);
            print_linked_list(head);
        }
        else if(x == 1)
        {
            insert_at_tail(head, tail, v);
            print_linked_list(head);
        }
        else if(size(head) != NULL)
        {
            if(v == 0)
            {
                delete_at_head(head);
                print_linked_list(head);
            }
            else 
            {
                if(size(head) <= v)
                {
                    print_linked_list(head);
                    continue;
                }
                else if(size(head)-1 == v)
                {
                    delete_at_tail(head, tail, v);
                    print_linked_list(head);
                }
                else
                {
                    delete_at_any(head, v);
                    print_linked_list(head);
                }
            }
        }
        else 
        {
            print_linked_list(head);
            continue;
        }
    }

    return 0;
}