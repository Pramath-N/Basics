#include<bits/stdc++.h>

struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node* InsertEnd(Node* head, int x){
    Node* temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    temp -> prev = head -> prev;
    temp -> next = head;
    head -> prev -> next = temp;
    head -> prev = temp;
    return head;
}

Node* InsertBeg(Node* head, int x){
    Node* temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    temp -> prev = head -> prev;
    temp -> next = head;
    head -> prev -> next = temp;
    head -> prev = temp;
    return temp;
}
void PrintList(Node* head){
    Node* curr = head -> next;
    std::cout<< head -> data << std::endl;
    while(curr != head ){
        std::cout<<curr -> data<<std::endl;
        curr = curr -> next;
    }
}


int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> prev = head;
    head -> next -> next = new Node(30);
    head -> next -> next -> prev = head -> next;
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> prev = head -> next -> next;
    head -> next -> next -> next -> next = head;
    head -> prev =  head -> next -> next -> next;
    Node* tail = head -> next -> next -> next;
    PrintList(head);
    std::cout<<"After Insertion: \n";

    head = InsertBeg(head, 0);
    head = InsertEnd(head, 50);

    PrintList(head);
}