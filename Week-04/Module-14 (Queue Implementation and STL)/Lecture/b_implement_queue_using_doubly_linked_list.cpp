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
    
    void push(int value)    // O(1)
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
    void pop()  // O(1)
    {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
        {
            tail = NULL;
            return;
        }
        head->previous = NULL;
    }
    int front()     // O(1)
    {
        return head->value;
    }
    int back()  // O(1)
    {
        return tail->value;
    }
    int size()  // O(1)
    {
        return sz;
    }
    bool empty()    // O(1)
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
        int value;
        cin >> value;
        q.push(value);
    }
    // cout << q.front() << " " << q.back() << " " << q.size() << endl;

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}