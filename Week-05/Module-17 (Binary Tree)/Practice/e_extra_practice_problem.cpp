#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

// pre_order : root->left->right
void pre_order(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root->value << ", ";
    pre_order(root->left);
    pre_order(root->right);
}
// in_order : left->root->right
void in_order(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    in_order(root->left);
    cout << root->value << ", ";
    in_order(root->right);
}
// post_order : left->right->root
void post_order(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    post_order(root->left);
    post_order(root->right);
    cout << root->value << ", ";
}

int main()
{
    // node creation
    Node *root = new Node(1);
    Node *a = new Node(7);
    Node *b = new Node(9);
    Node *c = new Node(2);
    Node *d = new Node(6);
    Node *e = new Node(9);
    Node *f = new Node(5);
    Node *g = new Node(11);
    Node *h = new Node(5);

    // node connection
    root->left = a;
    a->left = c;
    a->right = d;
    d->left = f;
    d->right = g;
    root->right = b;
    b->right = e;
    e->left = h;

    cout << "Pre order: ";
    pre_order(root);
    cout << endl;
    cout << "In order: ";
    in_order(root);
    cout << endl;
    cout << "Post order: ";
    post_order(root);
    cout << endl;

    return 0;
}