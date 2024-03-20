#include<bits/stdc++.h>
struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* InsertBeg(Node* head,int val){
    // O(N) ==>
    // Node* temp = new Node(val);
    // if(head == NULL){
    //     temp -> next = temp;
    //     return temp;
    // }
    // Node* curr = head;
    // while(curr -> next != head){
    //     curr = curr -> next;
    //     //std::cout<<head -> next -> data;
    // }
    // temp -> next = curr -> next;
    // curr -> next = temp;
    // return temp;

    //O(1) ==>
    Node* temp = new Node(val);
    if(head == NULL){
        temp -> next = temp;
        return temp;
    }
    temp -> next = head -> next;
    head -> next = temp;
    int t = val;
    temp -> data = head -> data;
    head -> data = t;
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
    //Efficient one: O(1)
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
    head = InsertBeg(head,5);
    std::cout << "Later ....."<<std::endl;
    PrintList(head);
    return 0;
}