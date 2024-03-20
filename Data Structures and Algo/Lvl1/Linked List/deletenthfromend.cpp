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

void NthEnd(Node* head,int n){
    if(head = NULL) return;
    //Method 1
    // int cnt=1;
    // Node* curr = head;
    // while(curr->next != NULL){
    //     curr = curr->next;
    //     cnt++;
    // }
    // if(n > cnt) return;
    // curr = head;
    // for(int i = 1; i < cnt - n+1; i++ ){
    //     curr = curr->next;
    // }
    // std:cout<<curr->data;
    // return;

    //Method 2
    Node* n1 = head;
    Node* n2 = head;
    for(int i = 1 ; i <= n+1 ; i++){
        n2 = n2 -> next;
    }
    while(n2 != NULL){
        if(n1 -> next == NULL) return;
        n2 = n2 -> next;
        n1 = n1 ->next;
    }
    std::cout<<n1->data;

    Node* temp  = n1 -> next;
    n1 -> next = n1 -> next -> next;
    delete temp;

    return;
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
    Node *first = new Node(10);
    first->next = new Node(20);
    first->next->next = new Node(25);
    first->next->next->next = new Node(30);
    first->next->next->next->next = new Node(35);
    PrintList(first);
    NthEnd(first,2);
    std::cout<<"kekwa"<<std::endl;
    PrintList(first);
}