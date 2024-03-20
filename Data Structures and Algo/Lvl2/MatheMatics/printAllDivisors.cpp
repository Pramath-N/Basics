#include<bits/stdc++.h>

void printAllDIvisors(int n){
    for(int i = 1; i * i < n; i++){
        if(n % i == 0){
            std::cout<<i<<" ";
        }
    }
    for(int i = std::sqrt(n); i >= 1; i--){
        if(n % i == 0){
                 std::cout<<n / i<<" ";
        }
    }
    return;
}

int main(){
    int n;
    std::cout<<"Enter the number: ";
    std::cin>>n;
    std::cout<<"All the divisors of "<<n<<" are: \n";
    printAllDIvisors(n);        
    return 0;
}