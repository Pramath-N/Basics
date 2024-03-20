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

Node* InsertBeg(Node* head, int x){
    Node* temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    head -> prev = temp;
    head -> prev -> next = head;
    head = head -> prev;
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
    head = InsertBeg(head, 0);
    PrintListfh(head);
}