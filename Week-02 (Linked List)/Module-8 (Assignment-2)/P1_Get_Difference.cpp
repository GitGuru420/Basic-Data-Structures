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

int difference(Node* head)
{
    Node* temp = head;
    int mx = INT_MIN;
    int mn = INT_MAX;
    while (temp != NULL)
    {
        if(temp->value > mx)
        {
            mx = temp->value;
        }
        if(temp->value < mn)
        {
            mn = temp->value;
        }
        temp = temp->next;
    }
    int diff = mx - mn;
    return diff;
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
    cout << difference(head) << endl;

    return 0;
}