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

int HeightofTree(Node* root){
    if(root == NULL) return 0;
    return 1 + max(HeightofTree(root -> left) , HeightofTree(root -> right)); 
}

void KthNode(Node* root, int n){
    if(root == NULL ) return;
    if(n == 0) std::cout<<root -> key<< "  ";
    KthNode(root -> left, n-1);
    KthNode(root -> right, n-1);
}

void LevelorderTraversal(Node* root){

    //Brute Force: T.C = O(n + h)  S.C = O(2h){Aux Space}
    //
    // for(int i = 0; i < HeightofTree(root); i++){
    //     KthNode(root,i);
    // }  

    //Optimal:T.C = O(n)  S.C = O(width of tree ) Mostly = O((n+10)/2){Aux Space}
    //

    if(root == NULL) return;
    std::queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        std::cout<<temp -> key <<" ";
        if(temp->left != NULL) q.push(temp -> left);
        if(temp->right != NULL) q.push(temp -> right);
    }
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
    LevelorderTraversal(root);
    return 0;
}