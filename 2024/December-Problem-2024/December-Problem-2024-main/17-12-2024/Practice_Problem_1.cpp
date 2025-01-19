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

void addback(Node* &head,Node* &tail,int val){

    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}

void coutlinkedlist(Node *head){

    int count = 0;
    while (head != NULL)
    {
        count = count +1;
        head = head->next;
    }
    cout << count;
    
}

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int num;
        cin >> num;
        if (num == -1)
        {
            break;
        }
        addback(head,tail,num);
        
    }
    coutlinkedlist(head);
    
    return 0;
}