#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

int index(Node *head, int x)
{
    Node *temp = head;
    int idx = 0;
    while(temp != NULL)
    {
        if(temp->value == x)
        {
            return idx;
        }
        temp = temp->next;
        idx++;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--) 
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
        }
        int x;
        cin >> x;
        cout << index(head, x) << endl;
    }

    return 0;
}