#include<bits/stdc++.h>



int gcd(int a, int b){
    //Naive solution : T.C = O(min(a,b)) 
    // if(a % b == 0) return b;
    // else if (b % a == 0) return a;
    // for(int i = std::min(a, b); i > 0; i--){
    //     if(a % i == 0 && b % i == 0) return i;
    // }

    //basic version of eucldian algo we can optimize this by avoiding repeated substraction
    // while(a != b){
    //     if(a > b) a = a - b;
    //     else b = b - a;
    // }
    // return a;

    //Optimized soln:
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main(){
    int n,m;
    std::cout<<"Enter two numbers: ";
    std::cin>>n>>m;
    std::cout<<"The GCD of "<<n<<" and "<<m<<" is: "<<gcd(n, m)<<std::endl;        
    return 0;
}