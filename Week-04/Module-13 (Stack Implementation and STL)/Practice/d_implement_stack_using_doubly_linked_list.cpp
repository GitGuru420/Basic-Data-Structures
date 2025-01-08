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
    
    // push
    void push(int value)
    {
        sz++;
        Node* newNode = new Node(value);
        // corner case
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
    // pop
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
    // top
    int top()
    {
        return tail->value;
    }
    // size
    int size()
    {
        return sz;
    }
    // empty
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    myStack st;
    int n;  // Stack Size
    cin >> n;

    // Input
    while(n--)
    {
        int value;
        cin >> value;
        st.push(value);
    }

    // Output
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}