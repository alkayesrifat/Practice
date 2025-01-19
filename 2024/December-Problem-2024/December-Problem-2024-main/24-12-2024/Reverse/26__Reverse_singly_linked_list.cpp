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

void add_to_tail(Node* &head,Node* &tail,int val){
    Node *newnode = new Node(val);
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
    cout << endl;
}

void reverse_linked_list(Node* &head,Node* &tail,Node *temp){

    if (temp->next == NULL)
    {
        head = temp;
        return;
    }
    reverse_linked_list(head,tail,temp->next);
    temp->next->next = temp;
    
    tail = temp;
    tail->next = NULL;
    

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
    cout << "Before Reverse_linked_list function call" << endl; 
    print_linked_list(head);


    cout << "After Reverse_linked_list function call" << endl; 


    reverse_linked_list(head,tail,head);
    print_linked_list(head);
    
    return 0;
}