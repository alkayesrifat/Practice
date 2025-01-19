#include<bits/stdc++.h>
using namespace std;



class Node{
    public:
    int value;
    Node *next ;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

void printlinkedlist(Node *head){
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    
}
void insertany(Node* &head,int index,int val){

    Node *newnode = new Node(val);
    Node *temp = head;

    for (int i = 0; i < index-1; i++)
    {
        if (temp->next == NULL)
        {
            break;
        }
        temp = temp->next;
        
    }
    newnode->next = temp->next;
    temp->next = newnode;


}




int main(){

    Node *head = new Node(10);
    Node *b = new Node(50);
    Node *c = new Node(60);
    Node *d = new Node(80);
    head->next = b;
    b->next = c;
    c->next = d;
    


    insertany(head,2,50000);
    printlinkedlist(head);
    return 0;
}