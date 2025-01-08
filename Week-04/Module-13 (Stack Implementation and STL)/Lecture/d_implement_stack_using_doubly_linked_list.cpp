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

class myStack
{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

    void push(int val)
    {
        sz++;
        Node* newNode = new Node(val);
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
        Node* deleteNode = tail;
        tail = tail->previous;
        delete deleteNode;
        if(tail == NULL)
        {
            head = NULL;
            return;
        } 
        tail->next = NULL;
    }
    int top()
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
    myStack st;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}