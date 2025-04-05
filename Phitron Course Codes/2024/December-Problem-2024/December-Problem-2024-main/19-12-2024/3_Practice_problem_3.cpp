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


void add_at_tail(Node* &head,Node* &tail,int val){

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

int findmax(Node *head){
    int maxx = -1;
    while (head->next != NULL)
    {

        int m = max(head->value,head->next->value);
        if (m > maxx)
        {
            maxx = m;
        }
        
        
        head = head->next;
    }
    return maxx;
}


int main(){

    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while (1)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        add_at_tail(head,tail,value);
        
    }
    cout << findmax(head);
    
    return 0;
}