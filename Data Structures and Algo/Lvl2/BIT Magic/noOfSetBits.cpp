#include<bits/stdc++.h>

int setBits(int n){
    int i = 2, k = n;
    int cont = 0;
    while(n > 0){
        if(n & 1 == 1) cont++;
        n = n >> 1;
    }
    return cont;
}

int main(){
    int n;
    std::cout<<"Enter the value of n: "<<std::endl;
    std::cin>>n;

    std::cout<<"Number of set Bits: "<<setBits(n);

}