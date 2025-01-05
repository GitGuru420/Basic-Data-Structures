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
    
    // right now temp is last node
    tail->next = newNode;
    tail = tail->next;
}

void print_linked_list(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

void reverse_linked_list(Node* &head, Node* &tail, Node* temp) 
{
    // base case
    if(temp->next == NULL)
    {   
        head = temp;
        return;
    }
    reverse_linked_list(head, tail, temp->next);
    // code
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
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
    reverse_linked_list(head, tail, head);
    // print_linked_list(head);
    cout << head->value << endl;
    // cout << head->next->value << endl;
    cout << tail->value << endl;

    return 0;
}