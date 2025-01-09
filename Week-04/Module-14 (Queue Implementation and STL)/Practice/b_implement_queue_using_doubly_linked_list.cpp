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

class myQueue
{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;
    
    void push(int value)
    {
        sz++;
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
    void pop()
    {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
        {
            tail = NULL;
        }
        head->previous = NULL;
    }
    int front()
    {
        return head->value;
    }
    int back()
    {
        return tail->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    while(n--)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}