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
        this->right = NULL;
        this->left = NULL;
    }
};

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

int main()
{

    Node *root = new Node(1);

    Node *a2 = new Node(2);

    Node *b3 = new Node(3);

    Node *c4 = new Node(4);

    Node *d5 = new Node(5);

    Node *e6 = new Node(6);

    Node *f7 = new Node(7);

    root->left = a2;

    root->right = b3;

    a2->left = c4;

    a2->right = d5;

    b3->left = e6;

    b3->right = f7;

    postorder(root);

    return 0;
}