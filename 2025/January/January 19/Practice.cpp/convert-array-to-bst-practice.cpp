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

Node* convert(int a[] , int num,int l, int r)
{
    if (l > r)
    {
        return NULL;
    }
    

    int mid = (l+r)/2;

    Node *root = new Node(a[mid]);

    Node *left = convert(a,num,l,mid-1);
    Node *right = convert(a,num,mid + 1 , r);

    root->left = left;
    root->right = right;

    return root;

    
}

int main()
{
    

    int n ; cin >> n;
    int  arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i];
    }




    Node *root = convert(arr , n,0,n-1);
    

    level_printing(root);

    return 0;
}