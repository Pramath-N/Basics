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
    for(int i = 1; i < n; i++){
        if(n1 == NULL){
            std::cout<<"HEHE";
            return;
        }
        n2 = n2->next;
    } 
    while(n2 -> next != NULL){
        n1 = n1->next;
        n2 = n2->next;
    }
    std::cout<<n1->data;
}

int main(){
    Node *first = new Node(10);
    first->next = new Node(20);
    first->next->next = new Node(25);
    first->next->next->next = new Node(30);
    NthEnd(first,5);
}