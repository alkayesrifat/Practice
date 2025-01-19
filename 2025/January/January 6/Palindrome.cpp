#include <bits/stdc++.h>

using namespace std;


class Node{
    public:
    int val;
    Node *prev;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};

void ttail(Node* &head,Node* &tail,int val){
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

bool pali(Node *head,Node *tail){

    if (head->next == NULL)
    {
        return true;
    }
    
    for (Node *i = head,*j = tail; i!=j && j->next != i ; i = i->next,j=j->prev)
    {
        if (i->val != j->val)
        {
            return false;
        }
        
    }
    return true;
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int v;
    
    while (cin >> v)
    {
        if (v == -1 )
        {
            break;
        }
        ttail(head,tail,v);
        
    }
    if (pali(head,tail))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
    
    
    

    return 0;
}
