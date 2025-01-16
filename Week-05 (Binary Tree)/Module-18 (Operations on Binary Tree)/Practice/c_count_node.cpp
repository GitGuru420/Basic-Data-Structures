/*          
            8
          /   \
        3      10
       /       / \
      1       9   14     
*/
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


// my way to count node in a binary tree
/*
int count_node(Node *root)
{
    if(root == NULL)
        return 0;
    queue<Node*> q;
    q.push(root);
    int count = 0;
    while(!q.empty())
    {
        Node *f = q.front();
        q.pop();
        
        if(f->left != NULL)
        {
            count++;
            q.push(f->left);
        }
        if(f->right != NULL)
        {
            count++;
            q.push(f->right);
        }
    }
    return count + 1;
}
*/

int count_node(Node* root)
{
    if(root == NULL)
        return 0;
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l+r+1;
}

int main()
{
    Node *root = input_tree();
    cout << count_node(root) << endl;
    
    return 0;
}