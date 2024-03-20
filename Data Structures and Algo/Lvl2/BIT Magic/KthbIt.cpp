#include<bits/stdc++.h>

bool kthBit(int n, int k){
    int check =( n >> (k - 1));
    if(check % 2 == 0) std::cout<<"False";
    else std::cout<<"True";
}

int main(){
    int n,  k;
    std::cout<<"Enter the value of n: "<<std::endl;
    std::cin>>n;
    std::cout<<"Enter the value of k: "<<std::endl;
    std::cin>>k;

    if(kthBit(n, k)) int a;

}