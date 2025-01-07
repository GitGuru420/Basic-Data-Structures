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

// check palindrome
void check_palindrome(Node* head, Node* tail)
{
    bool flag = true;
    for(Node *i = head, *j = tail; i != j && i->previous != j; i = i->next, j = j->previous)
    {
        if(i->value != j->value)
        {
            flag = false;
            break;
        }
    }
    if(flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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

    check_palindrome(head, tail);

    return 0;
}