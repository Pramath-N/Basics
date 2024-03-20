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

Node* DeleteHead(Node* head){
    if(head == NULL || head -> next == NULL) return NULL;
    Node* curr = head;
    while(curr -> next != NULL){
        curr = curr -> next;
    }
    curr -> prev -> next = NULL;
    delete curr;
    return head;
}

void PrintListfh(Node* head){
    while(head != NULL){
        std::cout<<head -> data<<std::endl;
        head = head -> next;
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
    PrintListfh(head);
    std::cout<<std::endl<<"After"<<std::endl;
    head = DeleteHead(head);
    PrintListfh(head);
}