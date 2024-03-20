#include<bits/stdc++.h>


long long factorial(const int n)
{
    long long f = 1;
    for (int i=1; i<=n; ++i)
    f *= i;
    return f;
}

int trailingZeross(int n){
    //Brute Force Method on bigger input it gets fucked up;
    // long long fac = factorial(n);
    // int count = 0;
    // while(fac % 10 == 0){
    //     fac /= 10;
    //     count++;
    // }
    // return count;
    int count = 0;
    for(int i = 3; i <= n; i+= 3){
        count += n  / i;
    }
    return ceil(count/2);
}

int main(){
    int n;
    std::cout<<"Enter the integer: ";
    std::cin>>n;
    std::cout<<"The number of Trailing zeros in factorial of "<<n<<" is: "<<trailingZeross(n)<<std::endl;        
    return 0;
}