#include<bits/stdc++.h>

int countDigits(int n){
    int count = 0;
    while(n > 0){
        n /= 10;
        count++;
    }
    return count;
}

int main(){
    int n;
    std::cout<<"Enter the integer: ";
    std::cin>>n;
    std::cout<<"The number of digits in "<<n<<" is: "<<countDigits(n)<<std::endl;        
    return 0;
}