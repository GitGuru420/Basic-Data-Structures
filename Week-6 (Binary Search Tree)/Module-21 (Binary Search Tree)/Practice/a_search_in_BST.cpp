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

Node *input_tree()
{
    int root_val;
    cin >> root_val;
    Node *root;
    if (root_val == -1)
        root = NULL;
    else 
       root = new Node(root_val);
    queue<Node*> q;
    if(root)
        q.push(root);
    while(!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if(l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if(r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        f->left = myLeft;
        f->right = myRight;

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
    return root;
}

bool search(Node* root, int val)
{
    if(root == NULL)
        return false;
    if(root->value == val)
        return true;
    if(root->value < val)
        return search(root->right, val);
    else
        return search(root->left, val);
}

int main()
{
    Node* root = input_tree();
    int search_val;
    cin >> search_val;
    if(search(root, search_val))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}