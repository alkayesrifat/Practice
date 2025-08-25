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

Node *input_Binary_tree()
{
    int r;
    cin >> r;
    
    Node *root ;



    if (r == -1)
    {
        root = NULL;
        return root;
    }
    else
    {
        root = new Node(r);
    }
    
    

    queue<Node *> q;

    if(root != NULL)q.push(root);

    while (q.empty() == false)
    {
        Node *p = q.front();
        q.pop();

        int lef, rig;
        cin >> lef >> rig;

        Node *leftnode;
        Node *rightnode;

        if (lef == -1)
        {
            leftnode = NULL;
        }
        else
        {
            leftnode = new Node(lef);
        }

        if (rig == -1)
        {
            rightnode = NULL;
        }
        else
        {
            rightnode = new Node(rig);
        }

        p->left = leftnode;
        p->right = rightnode;

        if (p->left != NULL)
            q.push(p->left);
        if (p->right != NULL)
            q.push(p->right);
    }
    return root;
}

void levelorder(Node *root){
    
    queue<Node*>q;
    q.push(root);

    while (q.empty() == false)
    {
        Node *front = q.front();
        q.pop();
        cout << front->val << " ";
        if (front->left != NULL)
        {
            q.push(front->left);
        }
        if (front->right != NULL)
        {
            q.push(front->right);
        }
        
        
    }
    

}


int main()
{





    Node *root = input_Binary_tree();
    levelorder(root);



    

    return 0;
}