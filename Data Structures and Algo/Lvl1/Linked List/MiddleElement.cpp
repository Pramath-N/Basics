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

void MidEle(Node* head){
    if(head == NULL) return;
    if(head -> next == NULL){
        std::cout<<head->data;
        return;
    }
    Node* slow = head, *fast = head; 
    while( fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    std::cout<<slow->data;
    return;
}

int main(){
    Node *first = new Node(10);
    // first->next = new Node(20);
    // first->next->next = new Node(25);
    // first->next->next->next = new Node(30);
    MidEle(first);
}