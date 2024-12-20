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

void delete_at_tail(Node* &head, Node* &tail, int index)
{
    Node* temp = head;
    for(int i=1; i<index; i++) 
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
    int index;
    cin >> index;
    cout << "tail before delete: " << tail->value << endl;
    delete_at_tail(head, tail, index);
    print_linked_list(head);
    cout << "tail after delete: " << tail->value << endl;

    return 0;
}