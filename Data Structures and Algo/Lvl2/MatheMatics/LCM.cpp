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

int lcm(int a, int b){
    // //Naive Solution : O(a * b - max(a, b))
    // for(int i = std::max(a, b); i <= a * b; i++){
    //     if(i % a == 0 && i % b == 0) return i;
    // }

    //i donno whoe good it is but lets record this T.C ==> calculate
    // int i = std::max(a, b);
    // int mini = std::min(a, b);
    // int diff = std::max(a , b) - mini;
    // while(i % a != 0 || i % b != 0){
    //     i +=  mini;
    //     if( i % a == 0 && i % b == 0) return i;
    //     i += diff;
    // }
    // return i;

    //Optimal ==>   T . C ===> is same as of gcd that is O(log(n))
    return (a * b) / gcd(a, b);
}

int main(){

    int n,m;
    std::cout<<"Enter two numbers: ";
    std::cin>>n>>m;
    std::cout<<"The LCM of "<<n<<" and "<<m<<" is: "<<lcm(n, m)<<std::endl;        
    return 0;
}