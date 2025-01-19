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

Node *input_binary_tree()
{
    int first_number;
    cin >> first_number;

    Node *root;

    if (first_number == -1)
        root = NULL;

    else
        root = new Node(first_number);

    queue<Node *> q;

    if (root != NULL)
        q.push(root);
    else
        return root;

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        int left_number, right_number;
        cin >> left_number >> right_number;

        Node *left_node, *right_node;

        if (left_number == -1)
            left_node = NULL;
        else
            left_node = new Node(left_number);

        if (right_number == -1)
            right_node = NULL;
        else
            right_node = new Node(right_number);

        front->left = left_node;
        front->right = right_node;

        if (front->left != NULL)
            q.push(front->left);
        if (front->right != NULL)
            q.push(front->right);
    }
    return root;
}

void preorder_print(Node *root)
{
    if(root == NULL)return;
    cout << root->val << " ";
    preorder_print(root->left);
    preorder_print(root->right);
}

int main()
{

    cout << "Output in preorder" << endl
         << endl;
    Node *root = input_binary_tree();

    preorder_print(root);

    return 0;
}