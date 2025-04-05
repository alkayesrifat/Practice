#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void add_to_tail(Node *&head, Node *&tail, int val)
{

    Node *newnode = new Node(val);
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
 

bool is_palindrom(Node *head,Node *tail){

    for (Node *i = head, *j = tail;i != j && j->next != i ;i = i->next,j = j->prev)
    {
        if (i->value != j->value)
        {
            return false;
        }
        
    }
    return true;
    
}

int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;

    int v1;
    while (1)
    {
        cin >> v1;
        if (v1 == -1)
        {
            break;
        }
        add_to_tail(head1, tail1, v1);
    }

    if (is_palindrom(head1,tail1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    

    return 0;
}