#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class mystack{
    public:

    Node *head = NULL;                      Node *tail = NULL;            int len = 0;

    void push(int v){
        Node *newnode = new Node(v);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            len++;
            return;
        }
        tail->next = newnode;               
        tail = newnode;
        len++;
        
    }

    void pop(){

        Node *deletenode = head;
        head = head->next;

        delete deletenode;

        if (head == NULL)
        {
            tail = NULL;
        }
        


    }

    int front(){
        if (head != NULL)
        {
            return head->val;
        }
    }

    int back(){

        if (tail != NULL)
        {
            return tail->val;
        }
        

    }

    int size(){
        
        return len;

    }

    bool empty(){

        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        

    }

};

int main(){

    mystack st;

    int n ;           cin >> n;

    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        st.push(v);
    }

    while (st.empty() == false)
    {
        cout << st.front() << endl;
        st.pop();
    }
    
    
    
    




    return 0;
}