#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// pre order traversal : root->left->right
void pre_order(Node *root)
{
    if(root == NULL)
        return;
    cout << root->val << " ";
    pre_order(root->left);
    pre_order(root->right);
}

// in order traversal : left->root->right
void in_order(Node *root)
{
    if(root == NULL)
        return;
    in_order(root->left);
    cout << root->val << " ";
    in_order(root->right);
}

int
main()
{
    // Node creation
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);

    // Node connection
    root->left = a;
    root->right = b;

    a->left = c;
    a->right = d;

    b->left = e;
    b->right = f;

    d->left = g;
    e->right = h;

    // pre order traversal
    cout << "Pre order traversal (root->left->right):" << endl;
    pre_order(root);
    cout << endl;

    // in order traversal
    cout << "In order traversal (left->root->right):" << endl;
    in_order(root);
    cout << endl;

    return 0;
}