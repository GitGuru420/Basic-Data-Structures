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

void inorder(Node* root)
{
    if(root == NULL)
        return;
    inorder(root->left);    // left
    cout << root->value << " ";     // root   
    inorder(root->right);   // root 
}

int main()
{
    // node creation
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    // node connection
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    inorder(root);

    return 0;
}