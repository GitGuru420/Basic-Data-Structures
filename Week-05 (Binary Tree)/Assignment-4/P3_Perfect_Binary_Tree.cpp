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

int count_nodes(Node* root)
{
    if(root == NULL)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l+r+1;
}

int max_depth(Node* root)
{
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 1;
    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return max(l, r)+1;
}

int main()
{
    Node *root = input_tree();
    int totalNodes = count_nodes(root);
    int maxDepth = max_depth(root);

    if(pow(2, maxDepth)-1 == totalNodes)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}