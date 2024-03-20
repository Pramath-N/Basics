#include<bits/stdc++.h>

int maxEvOdd(int arr[], int n){
    int ans = 1, count = 1;

    //brute Force O(n)
    // for(int i = 0; i < n; i++){
    //     count = 1;
    //     for(int j = i + 1; j < n; j++){
    //         if((arr[j] % 2 + arr[j - 1] % 2) == 1) count++;
    //         else break;
    //     }
    //     ans = std::max(ans, count);
    // }
    

    //better/ Optimal
    for(int i = 1; i < n; i++){
        if((arr[i]  % 2 + arr[i - 1] % 2)  == 1){
            count ++;
            ans = std::max(count, ans);
        }
        else{
            count = 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {10, 12, 14, 7, 16, 9, 8};
    int n = 7;

    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<maxEvOdd(arr, n);
}