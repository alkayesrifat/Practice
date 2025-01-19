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

bool search(Node *root,int num){

    if(root == NULL)return false;
    if (root->val == num)
    {
        return true;
    }
    if (root->val > num)
    {

        return search(root->left,num);
    }
    else
    {
        return search(root->right,num);
    }

}

int main()
{

    Node *root = input_binary_tree();
    int num ; cin >> num;

    if (search(root,num))
    {
        cout << "Present";
    }
    else
    {
        cout << "Not Present";
    }
    

    
    return 0;
}