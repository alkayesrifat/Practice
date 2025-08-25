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

    while (q.empty() == false)
    {

        Node *front_node = q.front();
        q.pop();

        int left_value, right_value;

        cin >> left_value >> right_value;

        Node *left_node, *right_node;

        if (left_value == -1)
            left_node = NULL;
        else
            left_node = new Node(left_value);

        if (right_value == -1)
            right_node = NULL;
        else
            right_node = new Node(right_value);

        front_node->left = left_node;
        front_node->right = right_node;

        if (front_node->left != NULL)
            q.push(front_node->left);
        if (front_node->right != NULL)
            q.push(front_node->right);
    }

    return root;
}

void level_printing(Node *root)
{

    queue<Node *> q;
    q.push(root);

    while (q.empty() == false)
    {
        Node *t = q.front();
        q.pop();
        cout << t->val << " ";
        if (t->left != NULL)
            q.push(t->left);
        if (t->right != NULL)
            q.push(t->right);
    }
}

void insert(Node *&root, int num)
{

    if (root == NULL)
    {
        root = new Node(num);
    }
    if (num > root->val)
    {
        // right
        if (root->right == NULL)
        {
            root->right = new Node(num);
        }
        else
        {
             insert(root->right, num);
        }
    }
    else
    {
        // left
        if (root->left == NULL)
        {
            root->left = new Node(num);
        }
        else
        {
             insert(root->left, num);
        }
    }
}

int main()
{

    Node *root = input_binary_tree();
    int num;
    cin >> num;
    level_printing(root);
    cout << endl;

    insert(root, num);

    level_printing(root);

    return 0;
}