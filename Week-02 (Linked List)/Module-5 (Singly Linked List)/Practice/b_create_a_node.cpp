#include <bits/stdc++.h>
using namespace std;

// create node class
class Node
{
    public:
        int value;
        Node* next;
};

int main()
{
    // declare Node object
    Node a, b, c;

    // assign node object's value
    a.value = 100;
    b.value = 200;
    c.value = 300;

    // create link
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // print node value
    cout << a.value << endl;
    cout << a.next->value << endl;
    cout << a.next->next->value << endl;
    
    return 0;
}