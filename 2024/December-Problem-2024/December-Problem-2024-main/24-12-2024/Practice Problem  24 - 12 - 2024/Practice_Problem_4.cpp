#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node *next;
    Node *prev;
    Node(int value){
        this->next = NULL;
        this->value = value;
        this->prev = NULL;
    }
};

void add_to_head(Node* &head,Node* &tail,int val){
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

void add_to_any_position(Node *head,int index,int val){
    Node *temp = head;
    Node *newnode = new Node(val);
    for (int i = 0; i < index-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next =newnode;
    newnode->prev = temp;
    
    
}

void add_to_tail(Node* &head,Node* &tail,int val){
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

void print_ll_forward(Node *head){
    while (head != NULL)
    {
        cout << head->value << " ";
        head= head->next;
    }
    cout << endl;
}


void print_ll_reverse(Node *tail){
    while (tail != NULL)
    {
        cout << tail->value << " ";
        tail = tail->prev;
    }
    cout << endl;
    
}

int main(){


    Node *head = NULL;
    Node *tail = NULL;
    int q;cin >> q;

    int x , v;                        int len = 0;

    while (cin >> x >>v)
    {
        if (x == 0 && len == 0)
        {
            add_to_tail(head,tail,v); len++;
            print_ll_forward(head);
            print_ll_reverse(tail);
        }
        else if (x == 0)
        {
            add_to_head(head,tail,v);
            print_ll_forward(head);
            print_ll_reverse(tail);
        }
        
        else if (x > len)
        {
            cout << "Invalid" << endl;
        }
        else if (x == len)
        {
            add_to_tail(head,tail,v); len++;
            print_ll_forward(head);
            print_ll_reverse(tail);

        }
        else
        {
            add_to_any_position(head,x,v); len++;
            print_ll_forward(head);
            print_ll_reverse(tail);
        }
        
        
        
        
    }
    




    
    return 0;
}