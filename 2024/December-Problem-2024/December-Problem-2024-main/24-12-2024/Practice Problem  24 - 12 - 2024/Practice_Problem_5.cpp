#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int value;
    Node *prev;
    Node *next;
    Node(int value){
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_forward(Node *head,Node *tail){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void sort_doubly_linked_list(Node* &head,Node* &tail){

    for (Node *i = head;     i->next != NULL       ;i = i->next)
    {
        
        for (Node *j = i->next;     j != NULL       ;j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value,j->value);
            }
            
        }
        
    }

}


void insert_at_tail(Node* &head,Node* &tail,int val){

    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    
    tail->next = newnode;
    newnode->prev =tail;
    tail = newnode;
}

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    int in;
    while (1)
    {
        cin >> in;
        if (in == -1)
        {
            break;
        }
        insert_at_tail(head,tail,in);
        
    }
    sort_doubly_linked_list(head,tail);
    print_forward(head,tail);

    return 0;
}