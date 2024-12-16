#include <bits/stdc++.h>
using namespace std;

// create node class
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

int main()
{
    // declare Node object
    Node a(50), b(100), c(200);

    // create link
    a.next = &b;
    b.next = &c;

    // print node value
    cout << a.value << endl;
    cout << a.next->value << endl;
    cout << a.next->next->value << endl;
    
    return 0;
}