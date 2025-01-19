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

void print_forward(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail){
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
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

void delete_tail(Node* &head,Node* &tail){

    Node *deletetail = tail;
    
    tail = tail->prev;
    delete deletetail;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    
    tail->next = NULL; 

}

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    insert_at_tail(head,tail,10);
    insert_at_tail(head,tail,20);
    insert_at_tail(head,tail,30);
    insert_at_tail(head,tail,40);
    insert_at_tail(head,tail,50);
    insert_at_tail(head,tail,80);
    insert_at_tail(head,tail,90);




    print_forward(head);   cout << "After deleting tail"<<endl;

    delete_tail(head,tail);

    


    print_forward(head);

    delete_tail(head,tail);delete_tail(head,tail);

    print_forward(head);
    

    return 0;
}