#include<bits/stdc++.h>

bool isPalindrome(int n){
    int no = n;
    int k = 0;
    int count = 0;
    while(n > 0){
        int lastDigi = n % 10;
        n /= 10;
        count++;
        k = k*10 + lastDigi;
    }
    return(no == k);
}

int main(){
    int n;
    std::cout<<"Enter the integer: ";
    std::cin>>n;
    if(isPalindrome(n)){
        std::cout<<"Yes, "<<n<<" is a Palindrome\n";
    }        
    else{
        std::cout<<"No, "<<n<<" is not a Palindrome\n";
    }
    return 0;
}