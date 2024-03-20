#include<bits/stdc++.h>
struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = new Node(50);
    head -> next -> next -> next -> next -> next = head;
    return 0;
}

//Advantages and Disadvantages:

/*
AD- 
    We can traverse thru the whole list given any node.
    Implementation of algos like round robin.
    We can insert at either tail or head by maintaining just one pointer variable.

DISAD-
    Implementation of operations become a bit complicated.
*/