#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node* left;
        Node* right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

void pre_order(Node *root)
{
    if(root == NULL)
        return;
    cout << root->value << " ";
    pre_order(root->left);
    pre_order(root->right);
}

void in_order(Node *root)
{
    if(root == NULL)
        return;
    in_order(root->left);
    cout << root->value << " ";
    in_order(root->right);
}
void post_order(Node *root)
{
    if(root == NULL)
        return;
    post_order(root->left);
    post_order(root->right);
    cout << root->value << " ";
}

int main()
{
    Node *root = new Node(8);
    Node *a = new Node(3);
    Node *b = new Node(10);
    Node *c = new Node(1);
    Node *d = new Node(6);
    Node *e = new Node(9);
    Node *f = new Node(14);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;

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