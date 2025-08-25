#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node *next;
    Node *prev;
    Node(int value){
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_doubly_linked_list(Node *head){
    while (head != NULL)
    {
        cout << head->value <<  " ";
        head = head->next;
    }
    cout << endl;
    
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

void reverse_linked_list(Node* &head,Node* &tail){

    for (Node *i = head,*j = tail; i != j && j->next != i; i = i->next,j = j->prev)
    {
        swap(i->value,j->value);
    }
    

}


int main(){


    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        add_to_tail(head,tail,val);
        
    }


    reverse_linked_list(head,tail);
    print_doubly_linked_list(head);

    return 0;
}