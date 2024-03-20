#include<bits/stdc++.h>
struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct myStack{
    Node* head;
    int sz;
    myStack(){
        Node* head = NULL;
        sz = 0;
    }
    void push(int x){
        Node* temp = new Node(x);
        temp -> next = head;
        head = temp;
        sz++;
    }

    int pop(){
        if(head == NULL) return INT_MIN;
        Node* temp = head;
        head = head -> next;
        delete temp;
        sz--;
    }

    int peek(){
        if(head == NULL) return INT_MIN;
        return head -> data;
    }

    int size(){
        return sz;
    }

    bool isempty(){
        if(head == NULL) return true;
            if(sz == 0) return true;
            return false;
    }
};

int main(){
    myStack *st = new myStack();
    st -> push(20);
    st -> push(35);
    std::cout<<st -> peek()<<std::endl;
    st -> pop();
    std::cout<<st -> peek()<<std::endl;
    std::cout<<(bool)st -> isempty();
    std::cout<< st -> size();
    return 0;
}