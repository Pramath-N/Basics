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

int SizeofTree(Node* root){
    if(root == NULL) return 0;
    return 1 + SizeofTree(root -> left) + SizeofTree(root -> right); 
}

int main(){
    Node* root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);   
    root -> left -> left = new Node(40);
    root -> left ->right = new Node(50);    
    root -> left -> right -> left = new Node(80);
    root -> left -> right -> right = new Node(90);        
    root -> right -> left = new Node(60);
    root -> right -> right= new Node(70);

    std::cout<<SizeofTree(root);
    return 0;
}