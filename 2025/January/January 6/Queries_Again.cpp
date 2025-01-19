#include<bits/stdc++.h>
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

void hhead(Node* &head,Node* &tail,int val){
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
    
}


void inserta(Node *head , int index , int val){
    Node *newnode = new Node(val);
    Node *temp =head;
    for (int i = 0; i < index -1; i++)
    {
        temp= temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
    
}

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

void l(Node *head){
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->val<<" ";
        head = head->next;
    }
    cout << endl;
    
}




void r(Node *tail){
    cout << "R -> ";
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
    
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL; int len = 0;

    int q;cin >>q;

    while (q--)
    {
        int i ; cin >> i;

        int v; cin >> v;
        if (i > len)
        {
            cout << "Invalid" << endl;
        }
        
        else if (i == 0)
        {
            len++;
            hhead(head,tail,v);
            l(head);r(tail);
        }
        else if (i == len)
        {
            len++;
            ttail(head,tail,v);
            l(head);r(tail);
        }
        else
        {
            len++;
            inserta(head,i,v);
            l(head);r(tail);
        }
        
        
        

    }
    



    return 0;
}