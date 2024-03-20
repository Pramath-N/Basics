#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next; 
    Node(int x){
            data = x;
            next = NULL;
    }
};

Node* InsertBeg(Node *head, int key){
    Node *nhead = new Node(key);
    nhead->next = head;
    return nhead;
}
void PrintList(Node* head){

    // recursive code

    // if(head->next == NULL){
    //     std::cout<<head->data<<std::endl;
    //     return;
    // }
    // std::cout<<head->data<<std::endl;;
    // PrintList(head->next);

    //Iterative code(Better as no aux space)
    
    while(head != NULL){
        std::cout<<head->data<<std::endl;
        head = head -> next;
    }
}

int main(){
    Node *head = NULL;
    head = InsertBeg(head,10);
    head = InsertBeg(head,20);
    head = InsertBeg(head,30);
    PrintList(head);
    return 0;
}