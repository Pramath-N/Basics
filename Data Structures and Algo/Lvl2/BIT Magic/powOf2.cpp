#include<bits/stdc++.h>

bool powOfTwo(int n){
    return(n & (n - 1) == 0); 
}

int main(){
    int n;
    std::cout<<"Enter the value of n: "<<std::endl;
    std::cin>>n;

    if(powOfTwo(n)){
        std::cout<<"YES\n";
    }
    else std::cout<<"NO\n";

}