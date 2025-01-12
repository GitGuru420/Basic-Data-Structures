/*  Depth wise
Pre order: root->left->right
In order: left->root->right
Post order: left->right->root
*/
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

void preorder(Node* root)
{
    if(root == NULL)
        return;
    cout << root->value << " ";     // root
    preorder(root->left);           // left
    preorder(root->right);          // right
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

    preorder(root);

    return 0;
}