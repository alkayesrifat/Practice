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

    int root_number;
    cin >> root_number;

    queue<Node *> q;

    Node *root;

    if (root_number == -1)
        root = NULL;
    else
        root = new Node(root_number);

    if (root == NULL)
        return root;
    else
        q.push(root);

    while (q.empty() == false)
    {
        Node *front_node = q.front();
        q.pop();

        int left_number, right_number;
        cin >> left_number >> right_number;

        Node *leftnode;
        Node *rightnode;

        if (left_number == -1)
            leftnode = NULL;
        else
            leftnode = new Node(left_number);

        if (right_number == -1)
            rightnode = NULL;
        else
            leftnode = new Node(right_number);

        front_node->left = leftnode;
        front_node->right = rightnode;

        if (front_node->left != NULL)
            q.push(front_node->left);
        if (front_node->right != NULL)
            q.push(front_node->right);
    }
    return root;
}


bool search_bst(Node *root,int num){

    

}


int main()
{

    Node *root = input_binary_tree();

    int num ; cin >> num;

    if (search_bst(root,num))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    

    return 0;
}