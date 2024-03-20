#include<bits/stdc++.h>
struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct myQueue{
    Node* head;
    int sz;
    Node* tail;
    myQueue(){
        Node* head = NULL;
        sz = 0;
        Node* tail =NULL;
    }
    void enqueue(int x){
        Node* temp = new Node(x);
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        tail -> next = temp;
        tail = temp;
        sz++;
    }

    int dequeue(){
        if(head == NULL) return INT_MIN;
        Node* temp = head;
        head = head -> next;
        if(head == NULL) tail = NULL;
        delete temp;
        sz--;
    }

    int get_front(){
        if(head == NULL) return INT_MIN;
        return head -> data;
    }

    int get_rear(){
        if(head == NULL){
            return INT_MIN;
        }
        return tail -> data;
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
    myQueue *st = new myQueue();
    st -> enqueue(20);
    st -> enqueue(35);
    st -> enqueue(40);
    std::cout<<st -> get_rear()<<std::endl;
    std::cout<<st -> get_front()<<std::endl;
    st -> dequeue();
    std::cout<<st -> get_front()<<std::endl;
    std::cout<<st -> get_rear()<<std::endl;
    std::cout<<(bool)st -> isempty();
    std::cout<< st -> size()<<std::endl;
    return 0;
}