#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

bool searchBST(Node* root, int ele){

    // Recursive Approch

    if(root == NULL) return false;
    if(ele == root -> key) return true;
    if(ele > root -> key) return searchBST(root -> right, ele);
    else return searchBST(root -> left, ele);

// Itrerative Approch
    // while(root != NULL){
    //     if(root -> key;; == ele) return true;
    //     else if(root -> key;; > ele) root = root -> left;
    //     else root = root -> right;
    // }
    // return false;
}
int main(){
    Node* root = new Node(15);
    root -> left = new Node(10);
    root -> right = new Node(20);   
    root -> left -> left = new Node(5);
    root -> left ->right = new Node(12);    
    root -> left -> right -> left = new Node(11);
    root -> left -> right -> right = new Node(14);        
    root -> right -> left = new Node(18);
    root -> right -> right= new Node(25);
    std::cout<<searchBST(root, 60);
    return 0;
}