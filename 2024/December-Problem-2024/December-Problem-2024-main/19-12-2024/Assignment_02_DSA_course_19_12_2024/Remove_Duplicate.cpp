#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node *next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

void add_to_tail(Node* &head,Node* &tail,int value){

    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    
    
}

void delete_at_any_position(Node* &head, int index)
{

    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    Node *dele = temp->next;

    temp->next = temp->next->next;
    delete dele;
}




void isdupli(Node* &head) {
    Node *i = head;
    while (i != NULL && i->next != NULL) {

        Node *j = i;

        while (j->next != NULL) {

            if (i->value == j->next->value) {

                Node *dupli = j->next;

                j->next = j->next->next;
                
                delete dupli;

            } else {
                j = j->next;
                
            }
        }
        i = i->next;
    }
}


int main(){

    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while (1)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        add_to_tail(head,tail,v);
        
    }
    
    isdupli(head);
   
    
    print_linked_list(head);

    return 0;
}