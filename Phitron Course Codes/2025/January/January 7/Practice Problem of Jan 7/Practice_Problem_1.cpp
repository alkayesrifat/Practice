// LINK : https://docs.google.com/document/d/1KOilh4Vb-PN21_kD7ejLA6qx6AhVbHlq/edit


#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class mystack
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push(int x)
    {
        Node *newnode = new Node(x);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    void pop()
    {

        Node *deletenode = tail;

        tail = tail->prev;
        delete deletenode;
        if (tail == NULL)
        {
            head = NULL;
        }
    }
    int top()
    {
        return tail->val;
    }

    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

bool issame(mystack s1, mystack s2)
{

    while (s1.empty() == false)
    {
        if (s1.top() != s2.top())
        {
            return false;
        }
        s1.pop();
        s2.pop();
    }
    return true;
}

int main()
{

    mystack s1;
    mystack s2;

    int n1;
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        s1.push(x);
    }

    int n2;
    cin >> n2;

    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        s2.push(x);
    }

    if (n1 == n2)
    {
        if (issame(s1, s2))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}