#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value ;
    Node *next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }

};
void print_linkedlist(Node* head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
    
}
void insertlinkedlisttail(Node* &head,int i){
    
    Node *newnode = new Node(i);
    Node *temp = head;
    if (temp == NULL)
    {
        head = newnode;
        return;
    }
    
    while (temp->next != NULL)
    {

        temp = temp->next;
    }
    temp->next = newnode;
}

int main(){

    Node *head = NULL;
    

    print_linkedlist(head);

    insertlinkedlisttail(head,1000000);


    cout << endl << endl<<endl;

    print_linkedlist(head);

    return 0;
}