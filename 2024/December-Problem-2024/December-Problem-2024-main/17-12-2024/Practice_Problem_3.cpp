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

int coutlinkedlist(Node *head){

    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count = count +1;
        temp = temp->next;
    }
    return count;
    
}

void middel(Node *head,int index){
    Node *temp = head;
    for (int i = 0; i < index-1; i++)
    {
        if (temp->next == NULL)
        {
            break;
        }
        temp = temp->next;
    }
    cout << temp->value << " ";
    
    

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
    int len  = coutlinkedlist(head);

    if (len % 2 == 0)
    {
        int index = len/2;
        middel(head,index);
        index = index +1;
        middel(head,index);
    }
    else
    {
        int index = (len +1)/2;
        middel(head,index);
    }
    
    
    return 0;
}