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
    // cout << endl;
    
}

int max_in_linked_list(Node *head){
    Node *temp = head;
    int maxx = INT_MIN;
    while (temp != NULL)
    {
        maxx = max(maxx,temp->value);
        temp = temp->next;
    }
    return maxx;

}


int min_in_linked_list(Node *head){
    Node *temp = head;
    int minn = INT_MAX;
    while (temp != NULL)
    {
        minn = min(minn,temp->value);
        temp = temp->next;
    }
    return minn;

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
    int result = abs(max_in_linked_list(head)-min_in_linked_list(head));
    cout << result;


    return 0;
}