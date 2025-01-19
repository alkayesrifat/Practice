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
        this->left = NULL;
        this->right = NULL;
        this->val = val;
    }
};

Node *input_tree()
{

    // --------------------------------------------------------------------------------------------

    int root_number;
    cin >> root_number;

    Node *root;

    if (root_number != -1)
    {
        root = new Node(root_number);
    }
    else
    {
        root = NULL;
    }

    queue<Node *> q;

    if (root != NULL)
    {
        q.push(root);
    }
    else
    {
        return root;
    }

    // --------------------------------------------------------------------------------------------

    while (q.empty() == false)
    {
        Node *frontnode = q.front();
        q.pop();

        int leftnum, rightnum;
        cin >> leftnum >> rightnum;

        Node *leftnode, *rightnode;

        if (leftnum != -1)
        {
            leftnode = new Node(leftnum);
        }
        else
        {
            leftnode = NULL;
        }

        if (rightnum != -1)
        {
            rightnode = new Node(rightnum);
        }
        else
        {
            rightnode = NULL;
        }

        frontnode->left = leftnode;
        frontnode->right = rightnode;

        if (frontnode->left != NULL)
        {
            q.push(frontnode->left);
        }
        if (frontnode->right != NULL)
        {
            q.push(frontnode->right);
        }
    }
    return root;
}
void printStack(stack<int> s)
{

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
stack<int> leftstack;

void leftside(pair<Node *, int> a)
{
    if (a.first == NULL) return;

    bool arr[5000] = {false};

    queue<pair<Node *, int>> q;

    q.push({a.first, 0});

    while (q.empty() == false)
    {
        pair<Node *, int> t = q.front();
        q.pop();

        if (arr[t.second] == false)
        {
            leftstack.push(t.first->val);
            arr[t.second] = true;
        }

        if (t.first->left != NULL)
            q.push({t.first->left, t.second + 1});

        if (t.first->right != NULL)
            q.push({t.first->right, t.second + 1});
    }
}


void rightt(Node *root) 
{
    if (root == NULL)
        return;

    cout << root->val << " ";

    if (root->right)
    {
        rightt(root->right);
    }
    else if (root->left)
    {
        rightt(root->left);
    }
}





int main()
{

    Node *root = input_tree();

    leftside({root->left, 0});

    printStack(leftstack);

    cout << root->val << " ";

    rightt(root->right);

    return 0;
}