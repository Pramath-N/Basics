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

bool Is_Loop(Node* head){
    std::unordered_set<Node*> st; 
    while(head != NULL){
        if(st.find(head -> next) != st.end()) return true;
        st.insert(head);
        head = head -> next;
    }
    return false;
}

int main(){
    Node *first = new Node(10);
    first->next = new Node(20);
    first->next->next = new Node(25);
    // first -> next -> next -> next = first;
    std::cout<<Is_Loop(first);
}