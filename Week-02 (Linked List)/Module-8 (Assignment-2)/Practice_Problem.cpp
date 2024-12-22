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

void print_linked_list(Node* &head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size(Node* &head)
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

void delete_at_tail(Node* &head, Node* &tail,int idx)
{
    Node* tmp = head;
    for(int i=1;i<idx;i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    tail = tmp;
}


void delete_at_head(Node* &head)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_at_any(Node* &head, int idx)
{
    Node* tmp = head;
    for(int i=1;i<idx;i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;
    // while(true)
    // {
    //     cin >> val;
    //     if(val == -1) 
    //     {
    //         break;
    //     }
    //     insert_at_tail(head, tail, val);
    // }
    int x, v;
    while (q--)
    {
        cin >> x >> v;
        int sz = size(head);
        if(x > 1)
        {
            if(v > sz)
            {
                print_linked_list(head);
                continue;
            }
            else if(v == sz) 
            {
                delete_at_tail(head, tail, v);
                print_linked_list(head);
            }
            else if(v == 0)
            {
                delete_at_head(head);
                print_linked_list(head);
            }
            else
            {
                delete_at_any(head, v);
                print_linked_list(head);
            }
        }
        else if(x == 0)
        {
            insert_at_head(head, v);
            print_linked_list(head);
        }
        else 
        {
            insert_at_tail(head, tail, v);
            print_linked_list(head);
        }
    }

    return 0;
}