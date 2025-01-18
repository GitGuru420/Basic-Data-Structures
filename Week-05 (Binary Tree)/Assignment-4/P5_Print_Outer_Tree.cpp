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

Node* input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if(val == -1)
        root = NULL;
    else    
        root = new Node(val);
    queue<Node*> q;
    if(root != NULL)
        q.push(root);
    
    while(!q.empty())
    {
        Node *p = q.front();
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
        
        p->left = myLeft;
        p->right = myRight;

        if(p->left != NULL)
            q.push(p->left);
        if(p->right != NULL)
            q.push(p->right);
    }
    return root;
}

void print_right_tree(Node* root)
{
    cout << root->value << " ";
    if(root->right)
    {
        print_right_tree(root->right);
    }
    else if(root->left)
    {
        print_right_tree(root->left);
    }
}

void print_left_tree(Node* root)
{
    if(root->left)
    {
        print_left_tree(root->left);
    }
    else if(root->right)
    {
        print_left_tree(root->right);
    }
    cout << root->value << " ";
}

int main()
{
    Node *root = input_tree();
    if(root->left)
        print_left_tree(root->left);
    cout << root->value << " ";
    if(root->right)
        print_right_tree(root->right);
    
    return 0;
}