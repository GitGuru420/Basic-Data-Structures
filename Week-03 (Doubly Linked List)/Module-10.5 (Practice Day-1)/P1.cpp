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

// check
void check(Node* &head1, Node* &head2, int sz)
{
    Node* temp1 = head1;
    Node* temp2 = head2;
    int count = 0;
    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1->value == temp2->value)
        {
            count++;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    if(sz == count)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

// get size1, size2
int size1(Node* head1)
{
    Node* temp = head1;
    int sz1 = 0;
    while(temp != NULL)
    {
        sz1++;
        temp = temp->next;
    }
    return sz1;
}

int size2(Node* head2)
{
    Node* temp = head2;
    int sz2 = 0;
    while(temp != NULL)
    {
        sz2++;
        temp = temp->next;
    }
    return sz2;
}

int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;

    int value1;
    while(true)
    {
        cin >> value1;
        if(value1 == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, value1);
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int value2;
    while(true)
    {
        cin >> value2;
        if(value2 == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, value2);
    }
    
    int sz1 = size1(head1);
    int sz2 = size2(head2);

    if(sz1 == sz2)
    {
        check(head1, head2, sz1);
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}