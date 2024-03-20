#include<bits/stdc++.h>

bool isPrime(int n){
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main(){
    int n;
    std::cout<<"Enter the integer: ";
    std::cin>>n;
    if(n == 1)  std::cout<<"NO";
    else if(isPrime(n)) std::cout<<"YES";
    else std::cout<<"NO";
    return 0;
}