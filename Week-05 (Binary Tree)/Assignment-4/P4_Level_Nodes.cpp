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

int count_level(Node* root)
{
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 0;
    int l = count_level(root->left);
    int r = count_level(root->right);
    return max(l, r)+1;
}

void level_node(Node* root, int x)
{
    queue<pair<Node*, int>> q;
    if(root)
        q.push({root, 0});
    while(!q.empty())
    {
        pair<Node*, int> parent = q.front();
        q.pop();
        Node* node = parent.first;
        int level = parent.second;

        if(x > count_level(root))
        {
            cout << "Invalid" << endl; 
            break;
        }
        if(level == x)
            cout << node->value << " ";
        
        if(node->left)
            q.push({node->left, level+1});
        if(node->right)
            q.push({node->right, level+1});
    }
}

int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    level_node(root, x);
    
    return 0;
}