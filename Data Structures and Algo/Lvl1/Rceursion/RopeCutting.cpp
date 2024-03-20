// N = 17, A = 10, B = 11, C = 3 

// Output: 3 

// Explanation: The maximum cut can be obtain after making 2 cut of length 3 and one cut of length 11. 

// Input: N = 10, A = 9, B = 7, C = 11 

// Output: -1 


#include<bits/stdc++.h>
void ansdo(int n, int a, int b, int c, int cnt, std::vector<int> &arr){
    if(n == 0){
        arr.push_back(cnt);
        return;
    }
    if(n < a && n < b && n < c && n != 0 ){
        return;
    }

    if(n > a) ansdo(n-a,a,b,c,cnt+1,arr);
    if(n > b) ansdo(n-b,a,b,c,cnt+1,arr);
    if(n > c) ansdo(n-c,a,b,c,cnt+1,arr);
}
int NumOfCuts(int n, int a, int b, int c){
    int cnt = 0;
    std::vector<int> arr;
    ansdo(n,a,b,c,cnt,arr);
    if(arr.size() == 0) return -1;
    return(*(arr.end() - 1));
}

int main(){
    std::cout<<NumOfCuts(17,10,11,3);

    return 0;
}