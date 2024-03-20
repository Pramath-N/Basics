#include<bits/stdc++.h>
struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node*DeleteBeg(Node* head){

    //O(1) ==>
    if(head == NULL) return NULL;
    if(head -> next == head){
        delete head;
        return NULL;
    }
    std::swap(head -> data, head -> next -> data);
    Node* temp = head -> next;
    head -> next = head -> next -> next;
    delete temp;
    return head;
}

void PrintList(Node* head){
    // if(head == NULL) return;
    //Node* curr = head;

    // std::cout<<head -> data << std::endl;
    // while(curr != head){
    //     std::cout<< curr -> data<<std::endl;
    //     curr = curr -> next;
    // }
    //Efficient one: 
    if(head == NULL) return;
    Node* curr = head;
    do{
        std::cout<<curr -> data << std::endl;
        curr = curr -> next;
    }while(curr != head);

}

int main(){
    Node* head = new Node(10);
    // head -> next = head;
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = new Node(50);
    head -> next -> next -> next -> next -> next = head;
    PrintList(head);
    head = DeleteBeg(head);
    std::cout << "Later ....."<<std::endl;
    PrintList(head);
    return 0;
}