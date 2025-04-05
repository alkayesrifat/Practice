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

void insert_at_any_position(Node *head,int val,int index){
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < index-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
  

}

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    insert_at_tail(head,tail,10);
    insert_at_tail(head,tail,10);
    insert_at_tail(head,tail,10);
    insert_at_tail(head,tail,10);
    insert_at_tail(head,tail,10);
    insert_at_tail(head,tail,10);
    insert_at_tail(head,tail,10);




    print_forward(head);   cout << "After inserting in position 2"<<endl;



    insert_at_any_position(head,50,2);

    print_forward(head);
    

    return 0;
}